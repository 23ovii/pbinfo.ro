#include <bits/stdc++.h>
using namespace std;
int st[10], n;
bool gasit=0;
void tipar(){
    int i, j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(st[i]==j) cout<<"*";
            else cout<<"-";
        } cout<<endl;
    } cout<<endl;
    gasit=1;
}
int valid(int k){
    int i;
    for(i=1;i<=k-1;i++){
        if(st[k]==st[i] || abs(st[k]-st[i])==abs(k-i)) return 0;
    } return 1;
}
void back(int k){
    int i;
    if(k==n+1) tipar();
    else{
        for(i=1;i<=n;i++){
            st[k]=i;
            if(valid(k)==1) back(k+1);
            if(gasit==1) return;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n;
    back(1);
    return 0;
}