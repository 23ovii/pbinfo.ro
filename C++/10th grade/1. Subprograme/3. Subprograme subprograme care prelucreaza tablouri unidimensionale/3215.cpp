#include <bits/stdc++.h>
using namespace std;
int Kth(int a[], int n, int x, int k){
    int temp=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            temp++;
            if(temp==k){
                return i;
            } 
        }
    } return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[100], n, x, k; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<Kth(a, n, 2, 2);
    return 0;
}