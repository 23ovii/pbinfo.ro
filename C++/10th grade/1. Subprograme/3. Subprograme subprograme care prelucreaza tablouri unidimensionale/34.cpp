#include <bits/stdc++.h>
using namespace std;
int interval(int a[], int n){
    int first=a[0], last=a[n-1], count=0;
    if(first > last) swap(first, last);
    for(int i=0;i<n;i++){
        if(a[i]>=first && a[i]<=last) count++;
    } return count;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[100], n; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<interval(a,n);
    return 0;
}