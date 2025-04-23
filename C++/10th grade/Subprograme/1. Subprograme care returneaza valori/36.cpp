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
int i_prim(int n) {
    int x, y;
    x = y = n;
    while (!estePrim(y)) --y;
    while(!estePrim(x)) ++x;
    return x - y;
}
int main(){
    int n;
    cout << "n = "; cin >> n;
    cout << "Diferenta dintre cele doua numere prime este " << i_prim(n) << endl;
    return 0;
}