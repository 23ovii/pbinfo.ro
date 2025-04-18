// the sum of the divisors of a number
#include <iostream>
using namespace std;
int sumdiv(int n) {
    int S = 0;
    for (int d = 1; d * d <= n; d++) // it goes up to the square root of n cuz we add both d and n/d(pairs)
        if (n % d == 0) {
        	S = S + d;
            if (d * d < n)
                S = S + n / d;
    } return S;
}