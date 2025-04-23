#include<iostream>
using namespace std;
int Egal(int n) {
    bool adv = true;
    int temp;
    while (n) {
    if(n % 10 % 2 != 0) {
       temp = n % 10;
       break;
    } n /= 10;
} while (n) {
        if (n % 10 % 2 != 0 && n % 10 != temp) {
            return 0;
        } n /= 10;
    } return 1;
}
int main() {
    int n;
    cin >> n;
    cout << Egal(n);
    return 0;
}