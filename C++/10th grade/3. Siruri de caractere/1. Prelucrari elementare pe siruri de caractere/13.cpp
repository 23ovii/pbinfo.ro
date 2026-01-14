#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char a[256];
    cin.getline(a, 256);
    int len = strlen(a);    
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len - i; j++) {
            cout << a[j];
        }
        cout << endl;
    }    
    for(int i = 0; i < len; i++) {
        for(int j = i; j < len; j++) {
            cout << a[j];
        }
        cout << endl;
    }
    return 0;
}