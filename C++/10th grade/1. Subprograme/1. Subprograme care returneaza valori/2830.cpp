#include <bits/stdc++.h>
using namespace std;
int DivImpar(int a, int b){
    int divizor = 0; 
    for(int i = 1; i<=a; i++){
        if(a%i==0 && b%i==0 && i%2==1) {
            divizor = i;
        }
    }
    return divizor;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin>>a>>b;
    cout<<DivImpar(a,b);
    return 0;
}