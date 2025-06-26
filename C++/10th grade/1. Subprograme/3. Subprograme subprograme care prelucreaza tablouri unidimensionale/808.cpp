#include <bits/stdc++.h>
using namespace std;
void sub(int n, int *v, int x){
    int count=0, valori[n], indx=0, temp=0;
    for(int i=0;i<n;i++){
        if(v[i]==x) count++; 
        else if(v[i]!=x) valori[indx++]=v[i];
    } 
    for(int i=0;i<count;i++){
        v[i]=x;
    } for(int i=count;i<n;i++){
        v[i]=valori[temp++];
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, v[100], x; cin>>n>>x;
    for(int i=0;i<n;i++) cin>>v[i];
    sub(n, v, x);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}