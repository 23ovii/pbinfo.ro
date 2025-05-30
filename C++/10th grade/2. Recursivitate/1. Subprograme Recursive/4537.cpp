#include <bits/stdc++.h>
using namespace std;
int CifEgaleRec(int n, int k){
    if (n == 0) return (k == 0) ? 1 : 0;
    if ((n % 10) != k) return 0;
    if (n / 10 == 0) return 1;
    return CifEgaleRec(n / 10, k);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k; cin>>n>>k;
    cout<<CifEgaleRec(n, k);
    return 0;
}