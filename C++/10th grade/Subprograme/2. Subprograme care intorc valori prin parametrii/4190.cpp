// 70/100 pct
#include<iostream>
using namespace std;
void patrate(int n, int &x, int &y) {
    x = 0; y = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i * i * j * j == n) {
                if(i >= 2 && j > i) {
                    x = i;
                    y = j;
                    return;
                }
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