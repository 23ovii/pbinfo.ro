#include <bits/stdc++.h>
using namespace std;
int cifmaxpar(int n){
	if(n < 10){
        if(n % 2 == 0) return n;
		else return -1;
    }
	else{
		int x = cifmaxpar(n / 10);
		if(n % 2 == 1) return x;
		else{
			if(x > n % 10) return x;
			else return n % 10;
    	}
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<cifmaxpar(n);
    return 0;
}