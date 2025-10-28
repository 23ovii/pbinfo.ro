#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char a[256]; cin.getline(a, 256);
    if(a[0]>='A' && a[0]<='Z'){
        cout<<a[0];
    } for(int i=1;i<strlen(a);i++){
        if(a[i-1]==' ' && (a[i]>='A' && a[i]<='Z')){
            cout<<a[i];
        }
    }
    return 0;
}