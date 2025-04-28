#include <bits/stdc++.h>
using namespace std;
int echilibrat(int n) {
    int sumapare = 0, sumaimpare = 0;
    while(n){
        int cifra = n % 10;
        sumapare += cifra;
        n /= 10;
        cifra = n % 10;
        sumaimpare += cifra;
        n /= 10;
    } if(sumapare % 2 == 0 && sumaimpare % 2 == 1) return 1;
    else return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cout << echilibrat(n) << '\n';
    return 0;
}