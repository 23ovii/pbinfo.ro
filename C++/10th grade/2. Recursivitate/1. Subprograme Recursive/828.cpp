#include <bits/stdc++.h>
using namespace std;
int mp(int x){
    if(x >= 12) return x-1;
    else return mp(mp(x+2));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x; cin>>x;
    cout<<mp(x);
    return 0;
}