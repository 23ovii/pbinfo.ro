#include<iostream>
using namespace std;
void FConcat(char s[], char d[]) {
    int j = 0;
    while(s[j] != '\0') {
        j++;
    }
    int i = 0;
    while(d[i] != '\0') {
        s[j++] = d[i++];
    }
    s[j] = '\0';
}
int main() {
    char s[100], d[100];
    cin >> s >> d;
    FConcat(s, d);
    cout << s << endl;
    return 0;
}