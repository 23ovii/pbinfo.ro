#include <bits/stdc++.h>
using namespace std;
void ordonare(int *a, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, v[100]; cin>>n;
    for(int i=0;i<n;i++) cin>>v[i];
    ordonare(v, n); for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}