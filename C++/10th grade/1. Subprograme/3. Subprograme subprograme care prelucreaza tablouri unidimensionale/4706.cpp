#include <bits/stdc++.h>
using namespace std;
void Peak(int a[], int n, int &isPeak, int &poz) {
    int maxPos = 1;
    for (int i = 2; i <= n; i++){
        if (a[i] > a[maxPos]) maxPos = i;
    }
    for (int i = 1; i < maxPos; i++){
        if (a[i] >= a[i+1]) {
            isPeak = 0; poz = 0;
            return;
        }
    }
    for (int i = maxPos; i < n; i++){
        if (a[i] <= a[i+1]) {
            isPeak = 0; poz = 0;
            return;
        }
    }
    isPeak = 1;
    poz = maxPos;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[101], n, isPeak, poz; cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    Peak(a, n, isPeak, poz); cout<<isPeak<<" "<<poz;
    return 0;
}