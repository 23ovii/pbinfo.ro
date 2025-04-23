#include<iostream>
using namespace std;
void sum_div(int n, int &s){
    s=0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            s += i;
        }
    }
}
int main(){
    int n, s = 0;
    cin >> n;
    sum_div(n, s);
    cout << s;
    return 0;
}