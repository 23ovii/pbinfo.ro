#include <bits/stdc++.h>
using namespace std;
bool prim(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
int NrPrime(int n){
    int count=0;
    while(n){
        int cifra = n%10;
        if(prim(cifra)){
            count++;
        }
        n /= 10;
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    cout<<NrPrime(n);
    return 0;
}