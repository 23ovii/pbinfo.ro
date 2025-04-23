#include<iostream>
using namespace std;
void duplicare(int n, int &d){
    int p = 1, adv=0;
    d = 0;
    while(n){
        if (n % 2 == 0) {
            d = d + n % 10 * p;
            p = p * 10;
            adv = 1;
        }
        d = d + n % 10 * p;
        p = p * 10;
        n = n / 10;
    }   if(adv == 0){
        d = -1;
    }
}
int main(){
    int n, d;
    cin >> n;
    duplicare(n, d);
    cout << d << endl;
    return 0;
}