#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}
void interval(int n, int &a, int &b){
    a=fact(n-1)+1;
    b=fact(n+1)-1;
}
int main(){
    int n, a, b;
    cin>>n;
    interval(n, a, b);
    cout<<a<<" "<<b;
    return 0;
}