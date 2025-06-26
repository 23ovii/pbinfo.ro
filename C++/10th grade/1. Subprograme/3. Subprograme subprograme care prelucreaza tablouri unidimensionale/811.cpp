#include <bits/stdc++.h>
using namespace std;
void num(int n, int *v){
    int k=v[0];
    for(int i=0;i<n;i++){
        if(v[i]<=k) v[i]=0;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, v[100]; cin>>n;
    for(int i=0;i<n;i++) cin>>v[i];
    num(n, v);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}