#include<iostream>
using namespace std;
bool prim(int n) {
    if(n < 2) return false;
    for(int d = 2; d * d <= n; d++)
        if(n % d == 0) return false;
    return true;
}
void sum_div_prim(int n, int &s) {
    s=0;
    for(int i=1; i * i <= n; i++) {
        if(n%i==0) {
            if(prim(i)) s += i;
            int j = n / i;
         if(i != j && prim(j)){
            s += j;
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