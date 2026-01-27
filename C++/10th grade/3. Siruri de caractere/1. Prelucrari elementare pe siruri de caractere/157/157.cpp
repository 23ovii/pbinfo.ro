#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ifstream fin("doarvocale.in");
    ofstream fout("doarvocale.out");
    int n, count = 0;
    char s[100][31];
    fin >> n;
    fin.get();
    for(int i = 0; i < n; i++)
    {
        fin.getline(s[i], 31);
    }
    for(int i = 0; i < n; i++)
    {
        int len = strlen(s[i]), temp = 0;
        for(int j = 0; j < len; j++)
        {
            if(strchr("aeiouAEIOU", s[i][j]) != 0) temp++;
        }
        if(temp == len)
        {
            count++;
        }
    } fout << count;
    return 0;
}