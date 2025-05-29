#include <bits/stdc++.h>
using namespace std;
int PDoi(int n){
    if(n==1) return 1;
    else if(n%2!=0) return 0;
    else return PDoi(n/2);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<PDoi(n);
    return 0;
}