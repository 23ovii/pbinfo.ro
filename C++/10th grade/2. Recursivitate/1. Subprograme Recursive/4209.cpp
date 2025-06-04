#include <bits/stdc++.h>
using namespace std;
int DifParImpar(int n){
    if (n < 10) return (n % 2 == 0 ? 1 : -1);
    if((n%10)%2==0) return 1 + DifParImpar(n/10);
    else return -1 + DifParImpar(n/10);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<DifParImpar(n);
    return 0;
}