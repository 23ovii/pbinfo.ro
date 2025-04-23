#include<iostream>
using namespace std;
void Intercalate(char a[], char b[], char c[]) {
    int i, j = 0;
    for (i = 0; a[i] != 0 && b[i] != 0; i++){
        c[j++] = a[i];
        c[j++] = b[i];
    }
    while (a[i] != 0) {
        c[j++] = a[i++];
    }
    while (b[i] != 0) {
        c[j++] = b[i++];
    }
    c[j] = 0;
}
int main() {
    char a[100], b[100], c[200];
    cin>>a>>b;
    Intercalate(a, b, c);
    cout<<c<<endl;
    return 0;
}
// void Intercalate(char a[], char b[], char c[]) {
//     int k = 0;
//     int len = strlen(a) + strlen(b);
//     for(int i = 0; i < len; i++) {
//         if(i < strlen(a)) {    
//             c[k++] = a[i];
//         } if(i < strlen(b)) {
//             c[k++] = b[i];
//         }
// }
//     c[k] = '\0';
//     cout << c;
// }