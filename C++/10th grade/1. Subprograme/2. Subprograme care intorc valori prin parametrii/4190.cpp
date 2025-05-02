#include<iostream>
#include<cmath>
using namespace std;
void patrate(int n, int &x, int &y) {
    x = 0; y = 0;
    int rad = (int)sqrt(n);
    if (rad * rad != n) return;
    for (int i = 2; i * i <= rad; i++) {
        if (rad % i == 0) {
            int a = i;
            int b = rad / i;
            if (a < b) {
                x = a;
                y = b;
                return;
            }
        }
    }
}
int main() {
    int n, x, y;
    cin >> n;
    patrate(n, x, y);
    cout << x << " " << y << endl;
    return 0;
}