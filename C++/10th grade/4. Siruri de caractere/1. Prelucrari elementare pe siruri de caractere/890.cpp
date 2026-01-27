#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char s[256];
    cin.getline(s, 256);
    int counts[5] = {0};
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    for(int i = 0; s[i] != '\0'; i++){
        char c = tolower(s[i]);
        if(c == 'a') counts[0]++;
        else if(c == 'e') counts[1]++;
        else if(c == 'i') counts[2]++;
        else if(c == 'o') counts[3]++;
        else if(c == 'u') counts[4]++;
    }
    int max_count = 0;
    for(int i = 0; i < 5; i++){
        if(counts[i] > max_count) max_count = counts[i];
    }
    char result = ' ';
    for(int i = 0; i < 5; i++){
        if(counts[i] == max_count){
            if(result == ' ' || vowels[i] < result){
                result = vowels[i];
            }
        }
    }
    cout << (char)toupper(result) << endl;
    return 0;
}