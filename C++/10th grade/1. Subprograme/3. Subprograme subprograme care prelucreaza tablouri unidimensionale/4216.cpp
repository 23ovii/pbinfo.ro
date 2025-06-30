#include <bits/stdc++.h>
using namespace std;
int EliminaElemente(int a[], int n, int m){
    int i, k=0, temp[1001]={0}, b[10002];
    for (i=0;i<n;i++) temp[a[i]]++;
    for (i=0;i<=1000;i++)
        if (temp[i]>0) b[k++]=temp[i];
    sort(b, b + k);
    for (i=0;i<k && m>=b[i];i++) m -= b[i];
    return k-i;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[101], n, m; cin>>n>>m;
    for(int i=0;i>n;i++) cin>>a[i];
    cout<<EliminaElemente(a, n, m);
    return 0;
}