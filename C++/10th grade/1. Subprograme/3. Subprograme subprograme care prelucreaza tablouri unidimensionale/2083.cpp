#include <bits/stdc++.h>
using namespace std;
void ordon123(int n, int *a){
    int unu=0, doi=0, trei=0;
    while(n--){
        if(a[n]==1) unu++;
        else if(a[n]==2) doi++;
        else if(a[n]==3) trei++;
    }  int i=0;
    while(unu--) a[i++] = 1;
    while(doi--) a[i++] = 2;
    while(trei--) a[i++] = 3;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a[100]; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    ordon123(n, a);
    for(int i=0;i<n;i++) cout<<a[i];
    return 0;
}