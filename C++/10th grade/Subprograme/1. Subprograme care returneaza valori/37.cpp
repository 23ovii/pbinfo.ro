#include <bits/stdc++.h>
using namespace std;
int nz(int n){
    int count=0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    cout<<nz(n);
    return 0;
}