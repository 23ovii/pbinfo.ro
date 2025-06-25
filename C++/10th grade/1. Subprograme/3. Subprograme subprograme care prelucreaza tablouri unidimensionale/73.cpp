#include <bits/stdc++.h>
using namespace std;
int suma(int *v, int n, int m){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int temp;
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
        int suma=0;
        for(int i=0;i<m;i++) suma += v[i];
        return suma;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int v[100], n, m; cin>>n>>m;
    for(int i=0; i<n;i++) cin>>v[i];
    cout<<suma(v, n, m);
    return 0;
}