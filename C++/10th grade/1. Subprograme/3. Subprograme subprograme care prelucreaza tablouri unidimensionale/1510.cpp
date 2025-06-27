#include <bits/stdc++.h>
using namespace std;
int cautare(int n, double X[], double v){
    for(int i=0;i<n;i++){
        if(X[i]==v) return i;
    } return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; double x[100], v; cin>>n>>v;
    for(int i=0;i<n;i++) cin>>x[i];
    cout<<cautare(n, x, v);
    return 0;
}