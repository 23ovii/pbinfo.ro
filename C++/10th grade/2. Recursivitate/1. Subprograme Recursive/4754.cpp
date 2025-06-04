#include <bits/stdc++.h>
using namespace std;
int sufmax(int n){
    if(n <= 9) return n;
    if(n%10 == (n/10)%10) return sufmax(n/10) * 10 + n%10;
    else return n%10;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<sufmax(n);
    return 0;
}