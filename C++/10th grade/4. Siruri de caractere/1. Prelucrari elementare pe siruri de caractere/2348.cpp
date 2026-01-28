#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ma = 0, count = 0;
    char s[201];
    cin.getline(s, 201);
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] != ' ' && !(s[i] >= 'A' && s[i] <= 'Z') && strchr("aeiou", s[i]) == 0)
        {
        ma += s[i];
        count++;
        }
    }
    char mediu = ma / count;
    cout << mediu;
    return 0;
}