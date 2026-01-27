#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int v[61]={0}, temp, max = -1;
    char s[61];
    cin.getline(s, 61);
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            v[s[i]]++;
            if(v[s[i]] > temp)
            {
                temp = v[s[i]];
                max = s[i] - '0';
            }
            else if(v[s[i]] == temp && s[i] - '0' < max) max = s[i] - '0';
        }
    } if(max == -1) cout << "NU";
    else cout << max;
    return 0;
}