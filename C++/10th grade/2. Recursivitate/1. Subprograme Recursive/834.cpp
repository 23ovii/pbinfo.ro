#include <bits/stdc++.h>
using namespace std;
int elimcif(int n, int c){
    int aux = n%10;
    if(n==0) return 0;
    if(aux != c){
        return elimcif(n/10, c) * 10 + aux; 
    }
    return elimcif(n/10, c);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, c; cin>>n>>c;
    cout<<elimcif(n,c);
    return 0;
}