#include<iostream>
using namespace std;
void detcifre(int n, int &p, int &u) {
    u = n % 10; int c;
    while (n > 0)   {
        c = n % 10;
        n = n / 10;
    } p = c;
}

int main() {
    int n, p, u;
    cin>>n;
    detcifre(n, p, u);
    cout<<p<<" "<<u<<endl;
    return 0;
}