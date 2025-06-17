#include <bits/stdc++.h>
using namespace std;
int nr_vocale(char s[]) {
    if(s[0] == '\0') return 0;
    if(strchr("aeiouAEIOU", s[0])) return 1 + nr_vocale(s + 1);
    return nr_vocale(s + 1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char s[256];
    cin.getline(s, 256);
    cout << nr_vocale(s);
    return 0;
}