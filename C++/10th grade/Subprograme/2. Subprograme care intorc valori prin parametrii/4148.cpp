#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("secv10.in"); // 11
                           // 12 10 20 30 99 1000 1 20 500 600 5
ofstream fout("secv10.out"); // 3 2
int main() {
    int i,n,x,lmax=0,c=0,lmax1=0;
    fin >> n;
    for(i=1; i<=n; i++) {
        fin>>x;
        if(x%10==0) {
            lmax1++;
            if(lmax1>lmax){
                lmax=lmax1; 
                c=1;
            }
            else if(lmax1==lmax) c++;
        }
        else lmax1=0;
    }
    fout<<lmax<<" "<<c;
    return 0;
}