#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int c = b;
    while (c > 0){
        cout << a * (c % 10) << '\n';
        c /= 10; 
    }
    cout << a * b << '\n';
    return 0;
}