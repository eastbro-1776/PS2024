#include <iostream>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    int A = 0, B = 0;
    for (int i = 2; i >= 0; i--){
        A *= 10;
        B *= 10;
        A += (int)a[i] - '0';
        B += (int)b[i] - '0';
    }
    if (A > B) cout << A << '\n';
    else cout << B << '\n';
    return 0;
}