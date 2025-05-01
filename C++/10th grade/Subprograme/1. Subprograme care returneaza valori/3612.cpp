// not solved yet, pretty hard imma try it later
#include<iostream>
using namespace std;
int divizori(int n) {
    int s = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            s += i;
            if (i != n / i) {
                s += n / i;
            }
        }
    }
    return s;
}
int kpn(int a, int b, int k){
    while(k) {
        int ver = divizori(a);
        if(ver%2==0 && a%2==0){
            k--;
        } else if(ver%2==1 && a%2==1) {
            k--;
        } a++;
    } a--; if(k == 0 && a<=b) {
        return a;
    } else {
        return -1;
    }
}
int main(){
    int a, b, k;
    cin>>a>>b>>k;
    cout<<kpn(a,b,k);
    return 0;
}