#include<iostream>
using namespace std;
int concat(int a, int b){
    int temp = b, p = 1;
    while(temp){
        p *= 10;
        temp /= 10;
    }
    return a * p + b;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << concat(a, b);
    return 0;
}