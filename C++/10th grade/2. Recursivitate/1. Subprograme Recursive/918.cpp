#include <bits/stdc++.h>
using namespace std;
void sumcif(int n, int &s){
    if(n == 0) return;
    s += n%10;
    sumcif(n/10, s);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, s=0; cin>>n;
    sumcif(n, s); cout<<s;
    return 0;
}