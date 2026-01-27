#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int temp=0, aux;
    char s[256], voc[256];
    cin.getline(s, 256);
    for(int i = 0; i < strlen(s); i++)
    {
        if(strchr("aeiouAEIOU", s[i]) != 0)
        {
            voc[temp++]=s[i];
        }
    }
    for (int i = 0; i < temp - 1; i++) {
    for (int j = i + 1; j < temp; j++) {
        if (voc[i] < voc[j]) {
            char aux = voc[i];
            voc[i] = voc[j];
            voc[j] = aux;
        }
    }
}   temp=0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(strchr("aeiouAEIOU", s[i]))
        {
            s[i] = voc[temp++];
        }
    }
    cout << s;
    return 0;
}