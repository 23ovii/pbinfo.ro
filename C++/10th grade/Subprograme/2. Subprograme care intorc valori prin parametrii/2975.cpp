#include<iostream>
#include<cmath>
using namespace std;
void FRadical(int n, int &x, int &y) {
    for (x = (int)sqrt(n); x > 0; x--) {
        if (n % (x * x) == 0) {
            y = n / (x * x);
            break;
        }
    }
}
int main(){
    int n,x,y;
    cin>>n;
    FRadical(n,x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}