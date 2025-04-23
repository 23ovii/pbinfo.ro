#include<iostream>
using namespace std;
int sumdiv(int n) {
    int S = 0;
    for (int d = 1; d * d <= n; d++)
        if (n % d == 0) {
        	S = S + d;
            if (d * d < n)
                S = S + n / d;
    } return S;
}
void perfect(int a, int b){
    int sum = 0;
    int exista = 0;
    for(int i = b; i>=a; i--){
        if(sumdiv(i) == 2 * i){
            cout << i << " ";
            exista =  1;
        }
    }
    if(exista == 0){
        cout << "nu exista";
    }
}
int main(){
    int a, b;
    cin >> a >> b;
    perfect(a, b);
    return 0;
}