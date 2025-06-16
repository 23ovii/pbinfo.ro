#include <bits/stdc++.h>
using namespace std;
int multiplu(int a[], int n, int k){
    if(n==0) return 0;
    else if(a[n-1]%k==0 && a[n-1]%10==k) return 1 + multiplu(a, n-1, k);
    else return multiplu(a, n-1, k);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[101], n, k;
    cin>>n>>k; for(int i=0;i<n;i++) cin>>a[i];
    cout<<multiplu(a, n, k);
    return 0;
}