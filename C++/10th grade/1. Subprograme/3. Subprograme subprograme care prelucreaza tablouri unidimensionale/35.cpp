#include <bits/stdc++.h>
using namespace std;
int count(double a[], int n){
    int medie=0, count=0;
    for(int i=0;i<n;i++){
        medie=(double)medie+a[i];
    } medie=medie/(n-1);
    for(int i=0;i<n;i++){
        if(a[i]<=medie) count++;
    } return count;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; double a[100]; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<count(a,n);
    return 0;
}