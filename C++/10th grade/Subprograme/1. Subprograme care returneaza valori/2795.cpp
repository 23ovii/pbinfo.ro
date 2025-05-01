// 80/100 points
#include <bits/stdc++.h>
using namespace std;
    int resturi(int n, int x, int y, int r){
        int count = 0;
        for(int i = 1; i<=n;i++){
            if(i%y==r && i%x==r) {
                count++;
            }
        }
        return count;
    }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x,y,r;
    cin>>n>>x>>y>>r;
    cout<<resturi(n,x,y,r);
    return 0;
}