#include <bits/stdc++.h>
using namespace std;
int suma(int v[], int n, int i, int j){
    int suma=0;
    for(int k=1;k<i;k++){
        suma += v[k];
    }
    for(int k=j+1;k<=n;k++){
        suma += v[k];
    } return suma;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}