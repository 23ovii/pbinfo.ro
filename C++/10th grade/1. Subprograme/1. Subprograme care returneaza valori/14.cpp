#include<iostream>
using namespace std;
int prim(int n){
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cin >> n;
    if(prim(n)) cout << "DA";
    else cout << "NU";
    return 0;
}