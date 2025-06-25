#include <bits/stdc++.h>
using namespace std;
void numar(int n, int a[], int &k){
    int min=999999999, max=-1;
    for(int i=0;i<n;i++){
        if(a[i]<min) min=a[i];
        else if(a[i]>max) max=a[i];
    } int temp=min, p=1;
    while(temp){
        temp /= 10;
        p *= 10;
    } k=(max*p) + min;
    if(min==0) k *= 10;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}