#include <bits/stdc++.h>
using namespace std;
void cifmaxmin(int n, int &max, int &min) {
    max = -1, min = 10;
    if (n == 0)
        min=max=0;
    else {
        while (n > 0) {
            if (n % 10 > max)
                max = n % 10;
            if (n % 10 < min)
                min = n % 10;
            n = n / 10;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, max=0, min=0; cin>>n;
    cifmaxmin(n, max, min); cout<<max<<" "<<min;
    return 0;
}