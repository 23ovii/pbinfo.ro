#include <bits/stdc++.h>
using namespace std;
int cifminpar(int n) {
    if (n == 0) return -1;
    int temp = cifminpar(n / 10);
    if ((n % 10) % 2 == 0) {
        if (temp == -1) return n%10;
        if (temp < n % 10) return temp;
        else return n % 10;
    } else {
        return temp;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<cifminpar(n);
    return 0;
}