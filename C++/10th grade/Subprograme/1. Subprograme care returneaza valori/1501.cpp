#include <bits/stdc++.h>
using namespace std;
int norocoase(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0) {
        return (b - a) / 2;
    }
    return (b - a) / 2 + 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin>>a>>b;
    cout<<norocoase(a,b);
    return 0;
}