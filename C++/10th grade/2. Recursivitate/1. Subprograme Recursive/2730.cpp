#include <bits/stdc++.h>
using namespace std;
int SC(char s[]) {
    if (s[0] == '\0') return 0;
    if (isdigit(s[0]))
        return (s[0] - '0') + SC(s + 1);
    else
        return SC(s + 1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int s[101];
    cout<<SC("Ana are 15 mere si 185 de pere.");
    return 0;
}