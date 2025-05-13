#include <bits/stdc++.h>
using namespace std;
void sumcif(int n, int &s){
    if(n==0){
        s = 0;
    } else {
        sumcif(n/10, s);
        s += n%10;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, s=0; cin>>n;
    sumcif(n, s); cout<<s;
    return 0;
}