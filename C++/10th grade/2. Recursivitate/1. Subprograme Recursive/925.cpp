#include <bits/stdc++.h>
using namespace std;
void P(int x[], int n, int &mini, int &maxi, int &sum){
	if(n == 1) mini = maxi = sum = x[0];
	else{
		P(x , n - 1 , mini ,maxi, sum);
		sum += x[n-1];
		if(x[n-1] < mini) mini = x[n-1];
		if(x[n-1] > maxi) maxi = x[n-1];
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x[101], n, mini=999999999, max=0, sum=0; cin>>n;
    for(int i=0;i<n;i++) cin>>x[i];
    P(x, n, mini, max, sum); cout<<mini<<" "<<max<<" "<<sum;
    return 0;
}