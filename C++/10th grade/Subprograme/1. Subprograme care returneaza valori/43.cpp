#include <bits/stdc++.h>
using namespace std;
double nreal(int x, int y) {
    int digits = 0, temp = y;
    while(temp){
        digits++;
        temp /= 10;
    }
    int p = 1;
    for (int i = 1; i <= digits; i++) {
        p *= 10;
    }
    double z = x + (double)y / p;
    return z;  
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y;
    cin >> x >> y;
    cout << nreal(x,y) << endl;
    return 0;
}