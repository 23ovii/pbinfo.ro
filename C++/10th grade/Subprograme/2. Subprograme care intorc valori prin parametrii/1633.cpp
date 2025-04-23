// 80pct
#include<iostream>
using namespace std;
void dublare1(int &n) {
    int invers=0,c;
    while (n > 0) {
        c = n % 10;
        n = n / 10;
        invers = invers * 10 + c;
    }  invers = invers * 10 + c;
    while (invers > 0) {
        c = invers % 10;
        invers = invers / 10;
        n = n * 10 + c;
    } 
}

int main() {
    int n;
    cin>>n;
    dublare1(n);
    cout<<n<<endl;
}