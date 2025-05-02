#include<iostream>
using namespace std;
int sum_cifra_control(int a, int b) {
    int combinatii = 0;
    for (int i = a; i <= b; i++) {
        int cc;
        if (i % 9 == 0) cc = 9;
        else cc = i % 9;
        if (cc == a) {
            combinatii++;
        }
    } return combinatii;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum_cifra_control(a,b);;
    return 0;
}