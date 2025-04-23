#include<iostream>
using namespace std;
int fact(int n){
    int i=1;
    if(n==0 || n==1) {
        i=1;
    } while(n) {
        i=i*n;
        n--;
    }
    return i;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}
