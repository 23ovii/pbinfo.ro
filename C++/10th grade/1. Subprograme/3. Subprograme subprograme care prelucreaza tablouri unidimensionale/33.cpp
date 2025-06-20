#include <bits/stdc++.h>
using namespace std;
int multiplu(int a[], int n, int k){
    int count=0;
    while(n){
        if(a[n-1]%10==k && a[n-1]%k==0) count++;
        n--;
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[101], n, k; cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<multiplu(a,n,k);
    return 0;
}