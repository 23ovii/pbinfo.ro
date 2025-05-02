#include<iostream>
using namespace std;
void dublare1(int &n){
    int p=1, temp=n;
    while(temp >= 10){
        temp /= 10;
        p *= 10;
    } p *= 10; n = (temp * p) + n; 
}
int main() {
    int n;
    cin>>n;
    dublare1(n);
    cout<<n<<endl;
}