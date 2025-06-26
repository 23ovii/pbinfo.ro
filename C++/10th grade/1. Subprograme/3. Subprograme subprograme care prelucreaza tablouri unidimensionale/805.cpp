#include <bits/stdc++.h>
using namespace std;
void valuri(int n, int v[]){
    int elem=2*n, impare=1, pare=n*2;
    for(int i=0;i<elem;i++){
        if(i%2==0){
            v[i]=impare;
            impare += 2;
        } else if(i%2==1){
            v[i]=pare;
            pare -= 2;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,  v[100]; cin>>n;
    valuri(n, v); 
    for(int i=0;i<n * 2;i++) cout<<v[i];
    return 0;
}