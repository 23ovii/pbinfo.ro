#include<iostream>
using namespace std;
int prim(int n){
    int i;
    if(n<2){
        return 0;
    }
    for(i=2; i*i<=n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void afisare(int a, int b){
    int i;
    if(a>b){
        for(i=b; i<=a; i++){
            if(prim(i)){
                cout<<i<<" ";
            }
        }
    } else{
        for(i=a; i<=b; i++){
            if(prim(i)){
                cout<<i<<" ";
            }
        }
    }
}
int main(){
    int a, b;
    cin>>a>>b;
    afisare(a, b);
    return 0;
}