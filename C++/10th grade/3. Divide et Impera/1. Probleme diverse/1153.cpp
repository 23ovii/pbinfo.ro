#include<iostream>
using namespace std;
int v[101], n;
int ver(int s, int d)
{
    int mij, a, b, count=0;
    if(s == d)
    {
        int x = v[s];
        while(x > 0)
        {
         count++;
         x /= 10;
        } if(count%2==0) return 1;
        else return 0;
    }
    else
    {
        mij = (s + d) / 2;
        a = ver(s, mij);
        b = ver(mij + 1, d);
        if(a == 1 && b == 1) return 1;
        else return 0;
    }
}
int main()
{
    int s, d;
    cin >> n;
    s = 1;
    d = n;
    for(int i = 0; i < n; i++) cin >> v[i];
    if(ver(s, d) == 1) cout << "DA";
    else cout<< "NU";
}