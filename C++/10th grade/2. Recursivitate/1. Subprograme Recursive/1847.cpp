#include <bits/stdc++.h>
using namespace std;
bool prim(int n){
    if(n<2) return 0;
    if(n%2==0 && n>2) return 0;
    for(int i=3; i * i <= n; i = i + 2){
        if(n%i==0) return 0;
    } return 1;
}
void P(int x[], int n, int &s){
    if(n==0) s=0;
    else{
        P(x, n-1, s);
        if(prim(x[n-1])) s = s + x[n-1]; 
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x[101], n, s=0; cin>>n;
    for(int i=0;i<n;i++) cin>>x[i];
    P(x, n, s); cout<<s;
    return 0;
}