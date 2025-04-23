#include<iostream>
using namespace std;
void produs(int a, int &k){
    int produss = 1;
    k = 1;
    while (produss * (k+2) <= a) {
        k = k + 2;
        produss = produss * k;
    }
}
int main(){
    int n, k;
    cin >> n;
    produs(n, k);
    cout << k << endl;
    return 0;
}