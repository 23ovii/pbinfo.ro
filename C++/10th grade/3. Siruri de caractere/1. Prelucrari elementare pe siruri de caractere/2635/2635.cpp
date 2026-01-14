#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ifstream fin("capslock.in");
    ofstream fout("capslock.out");
    char s[256];
    fin.getline(s, 256);
    bool caps = false;
    int j = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '#'){
            caps = !caps;
        } else {
            if(islower(s[i]) && caps){
                s[j] = s[i] - 32;
            } else {
                s[j] = s[i];
            }
            j++;
        }
    }
    s[j] = '\0';
    fout << s;
}