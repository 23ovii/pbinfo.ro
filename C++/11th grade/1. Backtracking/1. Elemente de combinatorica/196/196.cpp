#include <bits/stdc++.h>
using namespace std;
int st[10], n, k;
ifstream fin("aranjamente.in");
ofstream fout("aranjamente.out");
void tipar(){
    int i;
    for(i=1;i<=k;i++){
        fout<<st[i]<<" ";
    } fout<<endl;
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
    
    fin>>n>>k;
    back(1);
    return 0;
}