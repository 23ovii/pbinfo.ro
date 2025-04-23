#include<iostream>
using namespace std;
int Fulg(int n){
    int unu = 0, doi = 0, trei = 0, patru = 0, cifre = 0;
    while(n){
        cifre++;
        if(n%10 == 1) unu++;
        else if(n%10 == 2) doi++;
        else if(n%10 == 3) trei++;
        else if(n%10 == 4) patru++;
        else return 0;
        n /= 10;
    }
    if(unu && doi && trei && patru && cifre == 9) return 1;
    else return 0;
}
int main(){
    int n;
    cin >> n;
    if(Fulg(n)) cout << "DA";
    else cout << "NU";
    return 0;
}