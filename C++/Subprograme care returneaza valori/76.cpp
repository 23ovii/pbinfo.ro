#include<iostream>
using namespace std;
int UCP(int n){
    if(!n) return 0;
    while(n){
    if(n%10%2==0) {
        return n%10;
    }
    n /= 10;
}
return -1;
}
int main(){
    int n;
    cout<<"Introduceti un numar: ";
    cin>>n;
    cout<<"Ultima cifra para este: "<<UCP(n);
    return 0;
}