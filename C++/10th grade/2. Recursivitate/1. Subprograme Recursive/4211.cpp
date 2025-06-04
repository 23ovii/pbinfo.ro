#include <bits/stdc++.h>
using namespace std;
int ElimZTRec(int n){
    if(n%10!=0) return n;
    else return ElimZTRec(n/10);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<ElimZTRec(n);
    return 0;
}