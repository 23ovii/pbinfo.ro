#include <bits/stdc++.h>
using namespace std;
bool nrPrim(int n){
    if(n<2) return 0;
    if(n==2) return 1;
    if(n%2==0 && n>2) return 0;
    for(int i=3;i * i <= n; i += 2){
        if(n%i==0) return 0;
    } return 1;
}
void modificare(int *v, int n){
    int prim[n], nrPrime=0, compuse[n], nrCompuse=0;
    for(int i=0;i<n;i++){
        if(nrPrim(v[i])) prim[nrPrime++]=v[i];
        else compuse[nrCompuse++]=v[i];
    }
    for(int i=0;i<nrPrime;i++) v[i]=prim[i];
    for(int i=0;i<nrCompuse;i++) v[i+nrPrime]=compuse[i];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int v[101], n; cin>>n;
    for(int i=0;i<n;i++) cin>>v[i];
    modificare(v, n); for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}