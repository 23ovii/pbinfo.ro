#include<iostream>
using namespace std;
void produsmaxim(int n, int &pmax, int &st, int &dr) {
    int st1,dr1,p=10; pmax = -1;
    while(p <= n) {
		st1 = n / p;
        dr1 = n % p;
        p *= 10;
        if(st1*dr1 > pmax) {
            pmax = st1*dr1;
            st = st1;
            dr = dr1;
        }
    }
}
int main() {
    int n, pmax, st, dr;
    cin >> n;
    produsmaxim(n, pmax, st, dr);
    cout << pmax << " " << st << " " << dr;
    return 0;
}