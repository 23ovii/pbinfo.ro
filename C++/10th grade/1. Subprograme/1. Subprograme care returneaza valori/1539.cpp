#include <bits/stdc++.h>
using namespace std;
int apartenenta(int n){
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        }else if(n % 3 == 0){
            n /= 3;
        }else if(n % 5 == 0){
            n /= 5;
        }else{
            return 0;
        }
    } return 1; 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cout << apartenenta(n) << '\n';
    return 0;
}