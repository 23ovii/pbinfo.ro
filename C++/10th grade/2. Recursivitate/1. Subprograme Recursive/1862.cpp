#include <bits/stdc++.h>
using namespace std;
void cnt_cif(int n, int k, int &c){
    if(n<10){
        if(n>=k){
            c=1;
        } else{
            c=0;
        }
    } else{
        cnt_cif(n/10, k, c);
        if(n%10 >= k){
            c++;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k, c=0; cin>>n>>k;
    cnt_cif(n,k,c); cout<<c;
    return 0;
}