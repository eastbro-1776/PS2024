#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    b += c;
    a += b / 60;
    b %= 60;

    if (a >= 24) a -= 24;
    cout << a << ' ' << b << '\n';
    return 0;
}