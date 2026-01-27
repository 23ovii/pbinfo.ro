#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("palindrom.in");
    ofstream fout("palindrom.out");
    int n;
    char s[100][256];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> s[i];
    }
    for(int i = 0; i < n; i++)
    {
        int len = strlen(s[i]);
        bool ok = 1;
        for(int j = 0; j < len / 2; j++)
        {
            if(s[i][j] != s[i][len - 1 - j]) {
            ok = 0;
            break;
            }
        }
        if(ok) fout << "1\n";
        else fout << "0\n";
    }
    return 0;
}