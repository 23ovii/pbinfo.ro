#include <bits/stdc++.h>
using namespace std;
void sterge(int v[], int &n, int i, int j){
    int mutare=j-i+1, n2;
    n2=n-mutare;
    for(int k=j+1;k<=n;k++){
        v[k - mutare]=v[k];
    } n=n-mutare;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int v[100], n, i, j; cin>>n>>i>>j;
    for(int k=0;k<n;k++) cin>>v[k];
    sterge(v,n,i,j);
    for(int k=0;k<n;k++) cout<<v[k]<<" ";
    return 0;
}