#include<iostream>
using namespace std;
void secventa(int &n){
    int a[101], nr=0;
    while(n) {
        a[nr++] = n%10;
        n = n/10;
}
for(int i=0;i<nr-1;i++) {
    if(a[i]==2 && a[i+1]==2) {
        a[i]=0;
    }
}
    for(int i=nr-1;i>=0;i--) {
        n = n*10 + a[i];
    }
}
int main(){
    int n;
    cin >> n;
    secventa(n);
    cout << n;
    return 0;
}