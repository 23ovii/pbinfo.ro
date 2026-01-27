#include<iostream>
using namespace std;
int v[501], n;
int ver(int s, int d)
{
    int mij, a, b;
    if(s == d) return 1;
    else
    {
        mij = (s + d) / 2;
        a = ver(s, mij);
        b = ver(mij + 1, d);
        if(a == 1 && b == 1 && v[s] == v[mij + 1]) return 1;
        else return 0;
    }
}
int main()
{
    int s, d;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> v[i];
    if(ver(0, n-1) == 1) cout << "DA";
    else cout<< "NU";
}