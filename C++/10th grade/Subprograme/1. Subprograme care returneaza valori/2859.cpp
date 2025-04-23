#include<iostream>
using namespace std;
int TreiCifImp(int n) {
    while(n) {
        if (n % 10 % 2 && n / 10 % 10 % 2 && n / 100 % 10 % 2 ) return 1;
        n /= 10;
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    cout << TreiCifImp(n);
    return 0;
}