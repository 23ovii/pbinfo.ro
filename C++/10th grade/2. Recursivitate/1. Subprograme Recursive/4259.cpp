#include <bits/stdc++.h>
using namespace std;
int PalRec(int a[], int st, int dr){
    if(st >= dr) return 1;
    else if(a[st] != a[dr]) return 0;
    else if(a[st] == a[dr]) return PalRec(a, st+1, dr-1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a[101], i; cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    cout<<PalRec(a,2,4);
    return 0;
}