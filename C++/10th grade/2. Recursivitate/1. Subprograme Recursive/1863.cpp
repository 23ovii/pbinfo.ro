#include <bits/stdc++.h>
using namespace std;
int numarare(int v[], int n){
    if(n==0) return 0;
    else{
        if(v[n-1] == v[n-2]) return 1 + numarare(v, n-1);
        else return numarare(v, n-1);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[101], n;
    cin>>n; for(int i=0;i<n;i++) cin>>a[i];
    cout<<numarare(a, n);
    return 0;
}