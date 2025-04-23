#include<iostream>
using namespace std;
int sum_div(int n){
    int s = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            s += i;
    return s;
}
int main(){
    int n;
    cout << "n = "; cin >> n;
    cout << "Suma divizorilor lui " << n << " este " << sum_div(n) << endl;
    return 0;
}