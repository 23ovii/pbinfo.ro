#include<iostream>
using namespace std;
void prefix(int n, int k, int &x) {
    int p = 1;
    for (int i = 1; i <= k; i++)
        p = p * 10;
    x = n;
    while (x >= p) x = x / 10;
}
int main() {
    int n, k, x=0;
    cin>>n>>k;
    prefix(n, k, x);
    cout<<x<<endl;
    return 0;
}
// not my solution