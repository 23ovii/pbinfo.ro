#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    char a[201], *p;
    cin.getline(a, 201);
    p=strtok(a, "  ");
    n=strlen(p);
    while(p!=0){
        if(strlen(p)!=n){
            cout<<"NU";
            return 0;
        }
        p=strtok(NULL," ");
    } cout<<"DA"<<" "<<n;
    return 0;
}