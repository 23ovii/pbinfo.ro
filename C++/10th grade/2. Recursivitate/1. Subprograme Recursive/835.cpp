#include <bits/stdc++.h>
using namespace std;
void afisvec(int v[], int n){
    if(n>0){
        afisvec(v, n-1);
        cout<<v[n-1]<<" ";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int v[101], n;
    cin>>n; for(int i=0;i<n;i++) cin>>v[i];
    afisvec(v, n);
    return 0;
}