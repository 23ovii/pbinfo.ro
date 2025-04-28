#include <bits/stdc++.h>
using namespace std;
bool esteprim(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int interval(int n){
    for(int i = n;;i++){ 
        if(esteprim(i)) return i+1;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout<<interval(n);
    return 0;
}