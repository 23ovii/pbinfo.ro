#include<iostream>
using namespace std;
int cifreImpare(int n) {
    int temp = 0; int p = 1;
    bool ok = false; bool impare = true;
    while (n > 0) {
        int cifra = n % 10;
        if (cifra % 2 == 1) {
            ok = true;
        } else {
            impare = false;
            temp = temp + cifra * p;
            p *= 10;
        }
        n /= 10;
    }
    if(!ok || impare) {
        return -1;
    } else {
        return temp;
    }
}
int main() {
    int n;
    cin >> n;
    cout << cifreImpare(n);
    return 0;
}