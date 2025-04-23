#include<iostream>
using namespace std;
int prim(int n) {
    if (n < 2) return 0;
    if (n % 2 == 0 && n > 2) return 0;
    for (int d = 3; d * d <= n; d = d + 2)
        if (n % d == 0) return 0;
    return 1;
}
void sub(int n, int &a, int &b){
    a = n - 1;
    while (!prim(a)) a--;
    b = a-1;
    while (!prim(b)) b--;
}
int main(){
    int n, a, b;
    cin>>n;
    sub(n, a, b);
    cout<<a<<"\n"<<b;
    return 0;
}