// not solved yet, pretty hard imma try it later
#include<iostream>
using namespace std;
int divizori(int n){
    int s = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            s += i;
    return s;
}
int kpn(int a, int b, int k){
    int t = -1; int v[100];
    for(int i = a; i <= b; i++){
        if (divizori(i)%2 == 0 && i%2 == 0){
            v[++t] = i;
        } else if (divizori(i)%2 == 1 && i%2 == 1){
            v[++t] = i;
        }
    }
    return v[k];
}
int main(){
    int a, b, k;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "k = "; cin >> k;
    cout << "Elementul de rang " << k << " este " << kpn(a, b, k) << endl;
    return 0;
}