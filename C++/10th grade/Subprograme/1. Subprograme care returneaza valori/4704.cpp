#include<iostream>
using namespace std;
int majImp(int a, int b){
    for(int i=a;i<=b;i++){
        int sp=0, si=0;
        for(int j=2;j<i;j++){
            if(i%j==0 && j%2==0){
                sp+=j;
            } else if(i%j==0 && j%2!=0){
                si+=j;
            }
        } if(si>sp){
            return i;
        }
    }
    return 0;
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<majImp(a,b);
    return 0;
}