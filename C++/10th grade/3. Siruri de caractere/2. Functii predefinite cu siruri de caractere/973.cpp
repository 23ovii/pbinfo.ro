#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[256], *p;
    int nr=0;
    cin.getline(a, 256);
    p=strtok(a, " ");
    while(p!=0){
        for(int i=0;i<strlen(p);i++){
            if(strchr("aeiou", p[i])!=0){
                nr++;
            }
        } if(strlen(p)==nr){
            cout<<p<<endl;
        } nr=0;
        p=strtok(NULL, " ");
    }
}