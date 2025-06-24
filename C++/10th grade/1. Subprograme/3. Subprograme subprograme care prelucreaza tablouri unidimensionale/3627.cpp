#include <bits/stdc++.h>
using namespace std;
int FAB(int a[], int n, int b[], int m){
    int i, j, k, x;
    sort(a, a+n);
    for (k=0;k<m;k++){
        x = b[k];
        i=0; j=n-1;
        while (i<j && a[i]+a[j]!=x){
            if (a[i]+a[j]<x) i++;
            else j--;
        }
        if (i>=j) return 0;
    }
    return 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}