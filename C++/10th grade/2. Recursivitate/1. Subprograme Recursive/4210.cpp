#include <bits/stdc++.h>
using namespace std;
int FCrescRec(int n) {
    if (n < 10) return 1;
    if ((n % 10) > (n / 10) % 10) return 0;
    return FCrescRec(n / 10);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<FCrescRec(n);
    return 0;
}