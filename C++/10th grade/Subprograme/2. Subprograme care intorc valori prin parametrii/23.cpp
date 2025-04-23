#include<iostream>
using namespace std;
void oglindit(int n, int &inv) {
    int i;
    inv=0;
    while(n) {
        i = n % 10;
        inv = inv * 10 + i;
        n /= 10;
    }
}
int main() {
    int n, inv;
    cin >> n;
    oglindit(n, inv);
    cout << inv;
    return 0;
}