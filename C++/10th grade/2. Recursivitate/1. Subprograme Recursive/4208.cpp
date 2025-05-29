#include <bits/stdc++.h>
using namespace std;
int ExistaImpareRec(int n){
    if((n%10)%2) return 1;
    else if(n==0) return 0;
    else return ExistaImpareRec(n/10);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<ExistaImpareRec(n);
    return 0;
}