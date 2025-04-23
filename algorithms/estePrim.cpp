// determins the primality of a number
// the function returns true if n is prime and false otherwise
#include<iostream>
using namespace std;
bool estePrim(int n) {
    if (n < 2) return false;
    if (n % 2 == 0 && n > 2) return false;
    for (int d = 3; d * d <= n; d = d + 2)
        if (n % d == 0)
            return false;
    return true;
}