// this program generates all arrangements of k elements from n using backtracking
#include <bits/stdc++.h>
using namespace std;
int st[10], n, k;
void tipar(){
    int i;
    for(i=1;i<=k;i++){
        cout<<st[i]<<" ";
    } cout<<endl;
}
int valid(int p){
    int i;
    for(i=1;i<=p-1;i++){
        if(st[p]==st[i]) return 0;
    } return 1;
}
void back(int p){
    int i;
    if(p==k+1) tipar();
    else{
        for(i=1;i<=n;i++){
            st[p]=i;
            if(valid(p)==1) back(p+1);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>k;
    back(1);
    return 0;
}