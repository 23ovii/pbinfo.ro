#include <bits/stdc++.h>
using namespace std;
void afis() {
    int x;
    cin>>x;
    if(x!=0) afis();
    cout<<x<< " ";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    afis();   
    return 0;
}
