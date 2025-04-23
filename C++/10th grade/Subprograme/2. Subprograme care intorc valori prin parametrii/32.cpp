#include<iostream>
using namespace std;
void P(int &n, int c) {
    int a[15],cif = 0;
    while (n){
        if (n % 10 != c) {
            a[++cif] = n % 10;
        }
        n = n / 10;
    } for(int i = 1; i <= cif; --cif) {
         n = n*10 + a[cif];
    }   
}
int main() {
    int n, c;
    cin>>n>>c;
    P(n, c);
    cout<<n<<endl;
    return 0;
}