#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char a[256]; cin.getline(a, 256);
    a[0]-=32; a[strlen(a)-1]-=32;
    for(int i=1;i<strlen(a);i++){
        if(a[i+1]==' ' && (a[i]>='a' && a[i]<='z')){
            a[i]-=32;
        } else if(a[i-1]==' ' && (a[i]>='a' && a[i]<='z')){
            a[i]-=32;
        }
    }
    cout<<a;
    return 0;
}