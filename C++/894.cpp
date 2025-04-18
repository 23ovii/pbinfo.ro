#include<iostream>
using namespace std;
void cifminmax(int n, int &cifmax, int &cifmin) {
    cifmax = 0; cifmin = 9;
    if(n == 0) {
        cifmax = 0; cifmin = 0;
    }
    while(n) {
        if(n % 10 > cifmax) {
            cifmax = n % 10;
        }
        if(n % 10 < cifmin) {
            cifmin = n % 10;
        }
        n = n / 10;
    }
}
int main() {
    int n,cifmax,cifmin;
    cin >> n;
    cifminmax(n, cifmax, cifmin);
    return 0;
}