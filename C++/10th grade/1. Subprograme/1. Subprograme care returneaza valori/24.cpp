#include<iostream>
using namespace std;
int oglindit(int n){
    int inv=0;
    while(n){
        inv=inv*10+n%10;
        n=n/10;
    }
    return inv;
}
int main(){
    int n;
    cin>>n;
    cout<<oglindit(n);
    return 0;
}