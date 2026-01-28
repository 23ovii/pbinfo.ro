#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int aux, n = 0;
    char s[10001], cuv[10001][101];
    cin.getline(s, 10001);
    char *p = strtok(s, " .,?!");
    while (p) {
        strcpy(cuv[n++], p);
        p = strtok(NULL, " .,?!!");
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if(strcmp(cuv[i], cuv[j]) > 0)
            {
                char aux[101];
                strcpy(aux, cuv[i]);
                strcpy(cuv[i], cuv[j]);
                strcpy(cuv[j], aux);
            }
        }    
    }
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        while (i + 1 < n && strcmp(cuv[i], cuv[i + 1]) == 0) {
            cnt++;
            i++;
        }
        cout << cuv[i] << " " << cnt << "\n";
    }
    return 0;
}