#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("prosir.in");
    ofstream fout("prosir.out");
    char a[256];
    fin.getline(a, 256);
    for(int i=0;i<strlen(a)-2;i++){
        if(a[i]!=' ' && a[i+1]==' '){
            fout<<"5";
        } else fout<<a[i];
    } fout<<"5"<<".";
    return 0;
}