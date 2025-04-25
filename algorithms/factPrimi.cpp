// Prints the prime factors of a given number in ascending order
// Each prime factor is printed only once, regardless of its power in factorization
#include <iostream>
using namespace std;
void factPrim(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout<<i<<" ";
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        cout<<n;
    }
}