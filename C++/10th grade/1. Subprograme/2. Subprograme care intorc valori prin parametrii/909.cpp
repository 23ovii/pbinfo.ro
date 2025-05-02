#include <bits/stdc++.h>
using namespace std;
void perm(int &n){
    int p=1, temp=n;
    while(temp >= 10){
        temp /= 10;
        p *= 10;
    } n = (n % p) * 10 + temp;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    perm(n); cout<<n;
    return 0;
}