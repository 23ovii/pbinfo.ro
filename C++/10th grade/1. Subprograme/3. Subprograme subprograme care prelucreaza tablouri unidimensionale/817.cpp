#include <bits/stdc++.h>
using namespace std;
void zero(int n, int v[]){
    int elemente=2*n;
    int pare[elemente], impare[elemente], nrPare=0, nrImpare=0;
    for(int i=1;i<=elemente;i++){
        if(v[i]%2==0){
            pare[nrPare++]=v[i];
        } else if(v[i]%2){
            impare[nrImpare++]=v[i];
        }
    } nrPare=0; nrImpare=0;
    for(int i=1;i<=elemente;i++){
        if(i%2){
            v[i]=impare[nrImpare++];
        } else if(i%2==0){
            v[i]=pare[nrPare++];
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, v[101]; cin>>n;
    for(int i=1;i<=n*2;i++) cin>>v[i];
    zero(n, v); for(int i=1;i<=n*2;i++) cout<<v[i]<<" ";
    return 0;
}