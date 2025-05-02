#include<iostream>
using namespace std;
int multipli(int a, int b, int c){
    return b / c - (a - 1) / c;
}
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<multipli(a, b, c);
    return 0;
}