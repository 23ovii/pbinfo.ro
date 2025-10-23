#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char nume[21], prenume[21], temp[21]={}; int nr=0;
    cin>>nume>>prenume;
    for(int i=0;i<strlen(prenume);i++){
        if(strchr("aeiouAEIOU", prenume[i])==0){
            temp[nr++]=prenume[i];
        }
    } cout<<temp<<" "<<nume;
    return 0;
}