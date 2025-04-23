// 80/100 points
#include<iostream>
using namespace std;
int cmmnr(int n) {
    int v[11], cifre = 0;
    while (n){
        v[++cifre] = n % 10;
        n /= 10;
    } for (int i = 1; i < cifre; i++) {
        for (int j = i + 1; j <= cifre; j++) {
            if (v[i] > v[j]) {
                int aux;
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                }
            }
        }
    for (int i = 1; i <= cifre; i++)
        n = n * 10 + v[i];
    return n;
}
int main(){
    int n;
    cin>>n;
    cout<<cmmnr(n);
    return 0;
}