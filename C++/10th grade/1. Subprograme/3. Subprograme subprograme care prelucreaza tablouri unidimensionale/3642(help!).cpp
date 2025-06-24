// 70/100 points for it, no idea how to make it faster (tried bit manipulation too)
// https://www.pbinfo.ro/probleme/3642/f-expo
#include <bits/stdc++.h>
using namespace std;
void f_expo(int a[], int n){
    int e, pow;
    for(int i=0;i<n;i++){
        pow=2; e=1;
        if(a[i]==1){ 
            a[i]=0;
        }
        while(pow<=a[i]){
            pow *= 2;
            e++;
        } a[i]=e-1;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[100], n; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    f_expo(a, n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}