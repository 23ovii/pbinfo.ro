#include<iostream>
using namespace std;
int suma(int a, int b){
    int s=0;
    if(a>b){
        for(int i=1; i<=b; i++){
            if(a%i==0 && b%i==0){
                s+=i;
            }
        }
    } else{
    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0){
            s+=i;
        }
    }
}
return s;
}