#include<iostream>
using namespace std;
int nr_cif_zero(int n){
    int cifre=0;
    int m=n;
    while(n!=0){
        if(n%10%10==0) {
            cifre++;
        }
        n=n/10;
    }
    if(m==0) {
        cifre=1;
    }
    return cifre;
}
int main(){
    int n;
    cout<<"Introduceti un numar: ";
    cin>>n;
    cout<<"Numarul de cifre zero este: "<<nr_cif_zero(n);
    return 0;
}