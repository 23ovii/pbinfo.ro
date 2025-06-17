#include <bits/stdc++.h>
using namespace std;
unsigned nr_aparitii(char *sir, char *secventa){
    char *adr_prim = strstr(sir, secventa);
    if(adr_prim == NULL) return 0;
    return 1 + nr_aparitii(adr_prim + strlen(secventa), secventa);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cout<<nr_aparitii("maimuta_samurai", "mu");
    return 0;
}