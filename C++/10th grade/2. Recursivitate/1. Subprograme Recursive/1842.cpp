#include <bits/stdc++.h>
using namespace std;
void F(int n, int a[], int &k){
	if(n == -1) k = -1;
  	else{
      	F(n-1, a, k);
      	if(a[n-1] % 2 == 0)
          	if(k == -1) k = a[n-1];
          	else
          		k = k * 10 + a[n-1];
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a[101], k;
    cin>>n; for(int i=0;i<n;i++){
        cin>>a[i];
    }
    F(n, a, k); cout<<k;
    return 0;
}