#include <bits/stdc++.h>
using namespace std;
int sub(int n, int v[], int k){
    int sum=0;
    for(int i=0;i<n;i++){
        if(k && v[i]%2){
            sum += v[i];
            k--;
        }
    } if(k) return -1;
    else return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, v[100], k; cin>>n>>k;
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<sub(n, v, k);
    return 0;
}