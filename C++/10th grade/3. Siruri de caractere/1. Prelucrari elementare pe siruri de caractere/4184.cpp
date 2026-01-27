#include <bits/stdc++.h>
using namespace std;
void FNume(char s[], char id[]){
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == ' ') strcpy(id, s + i + 1);
    }
    strcat(id, "2022");
    cout << id;
}
    int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char s[51], id[51];
    cin.getline(s, 51);
    FNume(s, id);
    return 0;
}