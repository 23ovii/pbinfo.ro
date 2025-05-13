#include <bits/stdc++.h>
using namespace std;
int nr_cif_zero(int n){
    if(n<10){
        if(n==0){
            return 1;
        } else{
            return 0;
        }
    } else if(n%10==0) {
        return 1 + nr_cif_zero(n/10);
    } else {
        return nr_cif_zero(n/10);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<nr_cif_zero(n);
    return 0;
}