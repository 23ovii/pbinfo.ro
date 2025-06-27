#include <bits/stdc++.h>
using namespace std;
int PermD(int a[], int n) {
    long long suma=0;
    for(int i=1;i<=n;i++) suma += a[i];
    long long S=1LL*(n-1)*n/2;
    return (int)(suma - S);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[101], n; cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cout<<PermD(a, n);
    return 0;
}