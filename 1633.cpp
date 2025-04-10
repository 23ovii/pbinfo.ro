// 80/100 points
#include<iostream>
using namespace std;
void dublare1(int &n) {
    int invers;
    invers = 0;
    while (n > 0) {
        int c;
        c = n % 10;
        n = n / 10;
        invers = invers * 10 + c;
    }  invers = invers * 10 + invers % 10;
    n=0;
    while (invers > 0) {
        int c;
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