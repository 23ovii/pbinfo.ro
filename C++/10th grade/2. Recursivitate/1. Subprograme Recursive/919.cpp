#include <bits/stdc++.h>
using namespace std;
void nr_cif_zero(int n, int &nr) {
    nr = 0;
    if (n == 0) nr = 1;
    else{
        while (n > 0) {
            if (n % 10 == 0) nr++;
            n = n / 10;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, nr; cin>>n;
    nr_cif_zero(n, nr); cout<<nr;
    return 0;
}