// 80/100 pct
#include<iostream>
using namespace std;
void sum_div_prim(int n, int &s) {
    int i,j,d=0;
    s=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
        d=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                d++;
            }
        }
        if(d==2){
            s = s + i;
            }
        }
    }
}

int main() {
    int n,s;
    cin>>n;
    sum_div_prim(n,s);
    cout<<s;
    return 0;
}