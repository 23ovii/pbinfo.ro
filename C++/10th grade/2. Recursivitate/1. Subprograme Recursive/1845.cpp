#include <bits/stdc++.h>
using namespace std;
void ordonare(int a[], int n){
	if(n > 0){
    	int pmax = n-1;
      	for(int i = 0; i < n - 1; i ++)
          	if(a[i] > a[pmax]) pmax = i;
        int aux = a[pmax];
      	a[pmax] = a[n-1];
      	a[n-1] = aux;
      	ordonare(a, n - 1);
   	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}