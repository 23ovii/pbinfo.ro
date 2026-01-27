#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int frec=0, fr[256]={0};
    char s[256], maxchar = 0;
    cin.getline(s, 256);
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            fr[s[i]] += 1;
            if(fr[s[i]] > frec)
            { 
            frec = fr[s[i]];
            maxchar = s[i];
            }
            else if(fr[s[i]] == frec && s[i] < maxchar) maxchar = s[i];
        }
    }
    cout << maxchar;
    return 0;
}