#include<iostream>
using namespace std;
bool prim(int n){
    int i;
    if(n<2)
        return 0;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int a_prim(int n){
    int i=0;
    for(i=2;i*i<=n;i++){
        if(n%i==0 && prim(i)){
            if(prim(n/i) && n/i!=i){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    if(a_prim(n)==1){
        cout<<"DA";
    }else{
        cout<<"NU";
    }
    return 0;
}