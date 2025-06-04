#include <bits/stdc++.h>
using namespace std;
int DivImpRec(int n){
    if(n%2==1) return n;
    else return DivImpRec(n/2);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<DivImpRec(n);
    return 0;
}