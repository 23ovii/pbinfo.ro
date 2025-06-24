#include <bits/stdc++.h>
using namespace std;
long long NrSecvS(int a[], int n, int S){  
    long long sum = a[1], secv = 0, i = 1, j = 1;
    while (i <= n){
        while (sum <= S && j <= n){
            j++;
            sum += a[j]; 
        }
        secv=secv+n-j+1;
        sum -= a[i];
        i++;
    }
    return secv;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a[101], S; cin>>n>>S;
    for(int i=1;i<=n;i++) cin>>a[i];
    cout<<NrSecvS(a, n, S);
    return 0;
}