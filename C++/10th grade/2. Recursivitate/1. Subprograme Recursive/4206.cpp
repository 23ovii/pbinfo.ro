#include <bits/stdc++.h>
using namespace std;
int CifDiv3Rec(int n){
    if(n<10){
        if(n%3==0){
            return 1;
        } else{
            return 0;
        }
    } else if((n%10)%3==0) {
        return 1 + CifDiv3Rec(n/10);
    } else {
        return CifDiv3Rec(n/10);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<CifDiv3Rec(n);
    return 0;
}