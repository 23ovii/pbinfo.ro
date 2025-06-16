#include <bits/stdc++.h>
using namespace std;
int suma(int v[], int n, int i, int j){
    if(n==0) return 0;
    else{
        if(n<i || n>j) return v[n] + suma(v, n-1, i, j);
        else return suma(v, n-1, i, j);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int v[101], n, i, j;
    cin>>n; for(int k=1;k<=n;k++) cin>>v[k];
    cin>>i>>j;
    cout<<suma(v, n, i,  j);
    return 0;
}