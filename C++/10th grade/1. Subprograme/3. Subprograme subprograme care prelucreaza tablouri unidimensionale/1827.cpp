#include <bits/stdc++.h>
using namespace std;
bool estePrim(int n){
    if(n==2) return 1;
    if(n<2) return 0;
    if(n%2==0 && n>2) return 0;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return 0;
    } return 1;
}
void P(int x[], int n, int &s){
    s=0;
    for(int i=0;i<n;i++){
        if(estePrim(x[i])) s += x[i];
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x[100], n, s; cin>>n;
    for(int i=0;i<n;i++) cin>>x[i];
    P(x, n, s); cout<<s;
    return 0;
}