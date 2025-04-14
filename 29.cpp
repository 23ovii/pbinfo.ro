// 90/100 pct
#include<iostream>
using namespace std;
void sub(int n, int &a, int &b){
    int d=0;
    a=0; b=0;
    for(int i=n-1; i>0; i--){
            d=0;
            for(int j=1; j<=i; j++){
                if(i%j==0){
                    d++;
                }
                if(d>2) break;
            }
            if(d==2){
                if(a==0) a=i;
                else {
                    b=i;
                    break;
                }
            }
    }
}
int main(){
    int n, a, b;
    cin>>n;
    sub(n, a, b);
    cout<<a<<"\n"<<b;
    return 0;
}