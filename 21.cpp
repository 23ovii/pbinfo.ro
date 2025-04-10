#include <iostream>
using namespace std;
void sum_cif(int n, int &s) {
    s = 0;
    while (n > 0) {
        s = s + n % 10;
        n = n / 10;
    }
}