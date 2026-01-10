#include <bits/stdc++.h>
using namespace std;
int st[10], n;
ifstream fin("permutari.in");
ofstream fout("permutari.out");
void tipar(){
    int i;
    for(i=1;i<=n;i++){
        fout<<st[i]<<" ";
    } fout<<endl;
}
int valid(int k){
    int i;
    for(i=1;i<=k-1;i++){
        if(st[k]==st[i]) return 0;
    } return 1;
}
void back(int k){
    int i;
    if(k==n+1){
        tipar();
    } else{
        for(i=1;i<=n;i++){
            st[k]=i;
            if(valid(k)==1) back(k+1);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    fin>>n;
    back(1);
    return 0;
}