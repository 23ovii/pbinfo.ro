#include <bits/stdc++.h>
using namespace std;
void shift(int x[] , int n) {
    int temp=x[0];
    for (int i=1;i<n;i++) {
        x[i-1]=x[i];
    } x[n-1]=temp;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}