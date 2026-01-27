#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char s[101], aux[101] = {'?'};
    cin.getline(s, 101);
    int vocale = 0, i;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            strcpy(aux, s+i+1);
            s[i+1] = '*';
            strcpy(s+i+2, aux);
            i++;
        }
    }
    if(aux[0] == '?') cout << "FARA VOCALE";
    else cout << s;
    return 0;
}