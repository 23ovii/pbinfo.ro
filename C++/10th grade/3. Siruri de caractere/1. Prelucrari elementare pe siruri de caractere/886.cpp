#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char s[256], temp[256], *p; int nr=0;
    cin.getline(s, 256);
    p=strtok(s, "aeiou");
    while(p!=0){
        if(strlen(p)>=nr){
            strcpy(temp, p);
            nr=strlen(p);
        }
        p=strtok(NULL, "aeiou");
    } cout<<temp;
    return 0;
}