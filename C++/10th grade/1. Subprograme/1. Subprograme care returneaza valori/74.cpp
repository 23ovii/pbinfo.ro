#include <bits/stdc++.h>
using namespace std;
bool prim(int n){
    if(n<2) return false;
    for(int i=2; i * i <=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int nr_prim(int n){
    int val=0;
    for(int i=n+1;val==0;i++){
        if(prim(i)){
            val=i;
        }
    }
    return val;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    cout<<nr_prim(n);
    return 0;
}