#include <bits/stdc++.h>
using namespace std;
void F(int n, int a[], int &k){
    k=0; int temp=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            k = k * 10 + a[i];
            temp++;
        }
    } if(temp==0) k=-1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a[100], k; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    F(n,a,k); cout<<k;
    return 0;
}