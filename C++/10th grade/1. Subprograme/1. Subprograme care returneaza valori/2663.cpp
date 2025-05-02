#include<iostream>
using namespace std;
int NrDiv(int n) {
    int count = 0;
    for (int d = 1; d * d <= n; d++) // it goes up to the square root of n cuz we add both d and n/d(pairs)
        if (n % d == 0) {
        	count += 2;
            if (d * d == n)
                count--;
    } return count;
}
int NextNrDiv(int n){
    int nr = NrDiv(n);
    for(int i=n+1;;i++){
        if(NrDiv(i) == nr){
            return i;
        }
    }
}
int PrevNrDiv(int n){
    int nr = NrDiv(n);
    for(int i=n-1; i >= 1;i--){
        if(NrDiv(i) == nr){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    cout<<NrDiv(n)<<" "<<NextNrDiv(n)<<" "<<PrevNrDiv(n);
    return 0;
}