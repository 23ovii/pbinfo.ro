#include <bits/stdc++.h>
using namespace std;
void ordonare(int *a, int n, int st, int dr){
    for(int i=st;i<dr-1;i++){
        for(int j=st;j<dr-(i-st);j++){
            if(a[j]>a[j+1]){
                int aux=a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a[100], st, dr; cin>>n>>st>>dr;
    for(int i=0;i<n;i++) cin>>a[i];
    ordonare(a, n, st, dr);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}