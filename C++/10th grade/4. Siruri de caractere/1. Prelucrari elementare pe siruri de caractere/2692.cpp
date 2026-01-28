#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int aux, n = 0;
    char s[256], cuv[100][50];
    cin.getline(s, 256);
    char *p = strtok(s, " ");
    while (p) {
        strcpy(cuv[n++], p);
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(cuv[i]) < strlen(cuv[j]) || 
            (strlen(cuv[i]) == strlen(cuv[j]) && strcmp(cuv[i], cuv[j]) > 0)) {
                char aux[50];
                strcpy(aux, cuv[i]);
                strcpy(cuv[i], cuv[j]);
                strcpy(cuv[j], aux);
            }
        }
    }
    for (int i = 0; i < n; i++) cout << cuv[i] << "\n";
    return 0;
}