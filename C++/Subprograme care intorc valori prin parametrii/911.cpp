#include<iostream>
using namespace std;
void numar(int n, int k, int &x) {
    int a[101], m=0;
    while(n) {
        a[++ m] = n % 10;
		n /= 10;
    }
	for(int i = 1 ; i < m ; i ++) {
		for(int j = i + 1 ; j <= m ; j++) {
			if(a[i] < a[j]) {
				int aux = a[i];
				a[i] = a[j];
				a[j] = aux;
        }
    }
}
x=0;
for(int i = 1 ; i <= k ; i ++) {
		x = x*10 + a[i];
    }
}
int main() {
    int n, k, x;
    cin>>n>>k;
    numar(n, k, x);
    cout<<x<<endl;
    return 0;
}