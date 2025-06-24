#include <bits/stdc++.h>
using namespace std;
// int FGreater(int a[], int n, int x){
//     sort(a, a+n); int i=0; bool ok=1;
//     while(ok){
//         if(a[i]<x) i++;
//         else if(a[i]>x) ok=0;
//         else if(i>n) return -1;
//     } return a[i];
// }
int FGreater(int a[], int n, int x){
    int gasit=0, min;
    for(int i=0;i<n;i++){
        if(a[i]>x){
            if(!gasit || a[i]<min) {
                min=a[i];
                gasit=1;
            }
        }
    } if(!gasit) return -1;
    else return min;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a[100], x; cin>>n>>x;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<FGreater(a,n,x);
    return 0;
}