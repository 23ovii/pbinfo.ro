#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int sumfactcif(int n){
    int s=0;
    if(n==0 || n==1){
        s=1;
    }
    while(n!=0){
        int c=n%10, prod=1;
        for(int i=1;i<=c;i++){
            prod*=i;
        }
        s+=prod;
        n=n/10;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    cout<<sumfactcif(n);
    return 0;
}