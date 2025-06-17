#include <bits/stdc++.h>
using namespace std;
void num(int n, int v[]) {
    if(n == 0) return;
    if(v[n-1] <= v[0]) v[n-1] = 0;
    num(n-1, v);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, v[101]; cin>>n;
    for(int i=0;i<n;i++) cin>>v[n];
    num(n,v); for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}