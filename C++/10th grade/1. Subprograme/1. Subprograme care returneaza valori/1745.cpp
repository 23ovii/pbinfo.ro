#include<iostream>
using namespace std;
int minDivPrim(int n) {
    int rez = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            rez *= i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        rez *= n;
    }
    return rez;
}
int main(){
    int n;
    cin>>n;
    cout<<minDivPrim(n);
    return 0;
}