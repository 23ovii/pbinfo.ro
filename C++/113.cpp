#include<iostream>
using namespace std;
int nr_cif(int n, int k) {
    int val;
    while(n) {
        int c = n % 10;
        n=n / 10;
        if(c){
        if(k%c==0) {
            ++val;
        }
    }
    }
    return val;
}
int main() {
    int n, k;
    cin >> n >> k;
    cout << nr_cif(n, k);
    return 0;
}