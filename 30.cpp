#include<iostream>
using namespace std;
void sub(int n, int k){
    int i;
    for(i=n*k; i>0; i--){
        if(i%k==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n, k;
    cin>>n>>k;
    sub(n, k);
    return 0;
}