#include <bits/stdc++.h>
using namespace std;
int sumcif(int n){
    if(n == 0) return 0;
    else{
         return n%10 + sumcif(n/10);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<sumcif(n);
    return 0;
}