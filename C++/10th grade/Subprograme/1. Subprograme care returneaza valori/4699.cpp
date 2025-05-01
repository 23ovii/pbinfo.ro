#include <bits/stdc++.h>
using namespace std;
bool prim(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0) return false;
    }
    return true;
}
int Moderat(int n) {
    int prim1 = 2, prim2 = 3;
    
    for (int i = 5; i <= n; i++) {
        if (prim(i)) {
            prim1 = prim2;
            prim2 = i;
            int produs = prim1 * prim2;
            if (produs == n) return 1;
            if (produs > n) break;
        }
    }
    
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    cout<<Moderat(n);
    return 0;
}