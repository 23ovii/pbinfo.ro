#include <bits/stdc++.h>
using namespace std;
void aranjare(int *v, int n){
    int pare[n], nrPare=0, impare[n], nrImpare=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0) pare[nrPare++]=v[i];
        else impare[nrImpare++]=v[i];
    }
    for(int i=0;i<nrImpare;i++) v[i]=impare[i];
    for(int i=0;i<nrPare;i++) v[i+nrImpare]=pare[i];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int v[101], n; cin>>n;
    for(int i=0;i<n;i++) cin>>v[i];
    aranjare(v, n); for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}