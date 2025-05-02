#include <bits/stdc++.h>
using namespace std;
void factorial(int n, int &f) {
    if (n == 0) {
        f = 1;
    } else {
        factorial(n - 1, f);
        f = f * n;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,f; cin>>n;
    factorial(n,f); cout<<f;
    return 0;
}