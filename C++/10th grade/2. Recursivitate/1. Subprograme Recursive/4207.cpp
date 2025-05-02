#include <bits/stdc++.h>
using namespace std;
long long SumProdRec(int n){
    if(n == 2) {
        return 1 * 2;
    } return (n-1) * n + SumProdRec(n-1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<SumProdRec(n);
    return 0;
}