#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int resturi(int n, int x, int y, int r) {
    int lcm = x / gcd(x, y) * y;
    return (n - r) / lcm + 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x,y,r;
    cin>>n>>x>>y>>r;
    cout<<resturi(n,x,y,r);
    return 0;
}