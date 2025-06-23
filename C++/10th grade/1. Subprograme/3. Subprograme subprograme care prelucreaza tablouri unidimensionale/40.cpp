#include <bits/stdc++.h>
using namespace std;
void P(int n, int x[], int &mini, int &maxi, int &sum){
    maxi=-1; mini=999999999; sum=0;
    for(int i=0;i<n;i++){
        if(x[i]<mini) mini=x[i];
        if(x[i]>maxi) maxi=x[i];
        sum += x[i];
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x[100], mini, maxi, sum; cin>>n;
    for(int i=0;i<n;i++) cin>>x[i];
    P(n, x, mini, maxi, sum); cout<<mini<<" "<<maxi<<" "<<sum;
    return 0;
}