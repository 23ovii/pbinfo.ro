#include<iostream>
using namespace std;
void duplicare(int &n){
    int i = n, p = 1;
    n=0;
    while(i){
        if (i % 2 == 0) {
            n = n + i % 10 / 2 * p;
            p = p * 10;
        }
        n = n + i % 10 * p;
        p = p * 10;
        i = i / 10;
    }
}
int main(){
    int n;
    cin >> n;
    duplicare(n);
    cout << n << endl;
    return 0;
}
