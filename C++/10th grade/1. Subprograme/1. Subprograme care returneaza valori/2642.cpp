#include<iostream>
using namespace std;
int Phi(int n) {
    int result = n;
    for (int p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1) {
        result -= result / n;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    cout<<Phi(n);
}