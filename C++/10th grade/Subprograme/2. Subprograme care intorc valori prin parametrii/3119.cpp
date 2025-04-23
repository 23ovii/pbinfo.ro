#include<iostream>
using namespace std;
void Impare(int &n) {
    int a[101], cif=0;
    while(n) {
        a[++cif] = n % 10;
        n = n / 10;
    } if(a[cif]==1) {
        cif--;
    }
    for(int i = cif; i >= 1; i--) {
       
        if(a[i]%2!=0) {
            a[i] -= 1;
        }
        n=n*10 + a[i];
    } 
}
int main() {
    int n;
    cin>>n;
    Impare(n);
    cout<<n<<endl;
    return 0;
}