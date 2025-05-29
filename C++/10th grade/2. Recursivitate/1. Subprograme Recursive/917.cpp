#include <bits/stdc++.h>
using namespace std;
void cmmdc(int a, int b, int &r){
    if(b==0) r = a;
    else cmmdc(b, a%b, r);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, r; cin>>a>>b;
    cmmdc(a, b, r); cout<<r;
    return 0;
}