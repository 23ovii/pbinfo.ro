#include <bits/stdc++.h>
using namespace std;
int CifDiferiteRec(int n, int k){
    if(n <= 9) return (n != k ? 1 : 0);
    if(n%10 != k) return 1 + CifDiferiteRec(n/10, k);
    else return CifDiferiteRec(n/10, k);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin>>n>>k;
    cout<<CifDiferiteRec(n, k);
    return 0;
}