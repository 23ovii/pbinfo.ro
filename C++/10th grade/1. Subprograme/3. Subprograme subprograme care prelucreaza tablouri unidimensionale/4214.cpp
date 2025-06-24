#include <bits/stdc++.h>
using namespace std;
int DouaNumere(int a[], int n){
    int max1[83] = {0}, max2[83] = {0};
    for(int i = 0; i < n ; i++){
            int suma = 0;
            int nr = a[i];
            while(nr > 0){
                    suma += (nr % 10);
                    nr /= 10;
                }
            if(a[i] >= max1[suma]){
                    max2[suma] = max1[suma];
                    max1[suma] = a[i];
                }
            else if(a[i] > max2[suma]){
                    max2[suma] = a[i];
                }
        }
    int maxim = -1;
    for(int s = 1; s < 83 ; s++){
            if(max1[s] != 0 && max2[s] != 0){
                    int suma = max1[s] + max2[s];
                    if(suma > maxim)
                        maxim = suma;
                }
        }
    return maxim;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}