#include <bits/stdc++.h>
using namespace std;
int cmmdc(int a, int b){
    if(b==0) return a;
    else return cmmdc(b, a%b);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b; cin>>a>>b;
    cout<<cmmdc(a,b);
    return 0;
}