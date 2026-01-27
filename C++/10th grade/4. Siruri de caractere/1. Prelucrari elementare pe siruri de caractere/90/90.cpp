#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ifstream fin("vocmax.in");
    ofstream fout("vocmax.out");
    int n, voc=0, pos, max=-999;
    char s[100][256];
    fin >> n;
    fin.get();
    for(int i = 0; i < n; i++)
    {
        fin.getline(s[i], 256);
    }
    for(int i = 0; i < n; i++)
    {
        int len = strlen(s[i]);
        voc = 0;
        for(int j = 0; j < len; j++)
        {
            if(strchr("aeiouAEIOU", s[i][j]))
            {
                voc++;
            }
        } if(max < voc)
        {
            pos = i;
            max = voc;
        } 
    }
    fout << s[pos];
    return 0;
}