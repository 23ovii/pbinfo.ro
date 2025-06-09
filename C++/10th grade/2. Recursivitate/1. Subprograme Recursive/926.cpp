#include <bits/stdc++.h>
using namespace std;
int sum3(int v[], int n){
    if(n==0) return 0;
    else if((v[n-1])%3==0){
        return v[n-1] + sum3(v, n-1);
    } return sum3(v, n-1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int v[101], n; cin>>n;
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<sum3(v, n);
    return 0;
}