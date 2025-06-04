#include <bits/stdc++.h>
using namespace std;
int IncDecRec(int n) {
    if(n == 0) return 1;
    else{
        int aux=0, p=1;
        while(n){
            int c=n%10;
            if(c%2==0) aux=aux+(c+1)*p;
            else aux=aux+(c-1)*p;
            p *= 10;
            n /= 10;
        } return aux;
    } 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<IncDecRec(n);
    return 0;
}