#include <bits/stdc++.h>
using namespace std;
int det(int n) {
    int i = 1;
    int f1 = 1;
    while (f1 < n) {
        i++;
        f1 *= i;
    } if (f1 == n) return f1;
    int f2 = f1 / i;
    int dist1 = abs(f1 - n);
    int dist2 = abs(f2 - n);
    if (dist1 < dist2) {
        return f1;
    } else {
        return f2;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    cout<<det(n);
    return 0;
}