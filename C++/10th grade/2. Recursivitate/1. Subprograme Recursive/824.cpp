#include <bits/stdc++.h>
using namespace std;
int cifmax(int n) {
    if (n <= 9) return n;
    else {
        int temp = cifmax(n/10);
        if (temp < n%10) return temp;
        else return n%10;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<cifmax(n);
    return 0;
}