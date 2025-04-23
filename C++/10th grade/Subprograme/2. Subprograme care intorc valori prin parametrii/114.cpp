#include<iostream>
using namespace std;
void nr_div_imp(int n, int &a) {
    a = 0;
    int i;
    for (i = 1; i * i < n; i++)
        if (n % i == 0){
            if (i % 2 == 1)
                a++;
            if (n / i % 2 == 1)
                a++;
        }
    if (i * i == n && i % 2 == 1)
        a++;
}
int main(){
    int n, a;
    cin>>n;
    nr_div_imp(n, a);
    cout<<a;
    return 0;
}