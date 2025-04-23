#include<iostream>
using namespace std;
void sumcif(int n, int s, int t) {
    s = 0; t = 0;
    while (n > 0) {
        int c;
        c = n % 10;
        n = n / 10;
        if (c % 2 == 0) {
            s = s + c;
        } else if (c % 2 != 0) {
            t = t + c;
        }
    }
    cout<<s<<" "<<t<<endl;
}

int main() {
    int n, s, t;
    cin>>n;
    sumcif(n, s, t);
}