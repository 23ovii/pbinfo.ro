#include <bits/stdc++.h>
using namespace std;
int cautare(int n, double X[], double v){
    if(X[n-1] == v){ 
        return n-1;
    }  else if(n==1){
        return -1;
    }
    cautare(n-1, X, v);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; double X[101], v; cin>>n>>v;
    for(int i=0;i<n;i++) cin>>X[i];
    cout<<cautare(n, X, v);
    return 0;
}