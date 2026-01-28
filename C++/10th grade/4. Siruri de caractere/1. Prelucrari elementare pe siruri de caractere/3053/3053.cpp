#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("evenoddxxl.in");
    ofstream fout("evenoddxxl.out");
    char n[10001];
    fin.getline(n, 10001);
    int len = strlen(n);
    fout << ((n[len - 1] % 2 == 0) ? "Par" : "Impar");
    return 0;
}