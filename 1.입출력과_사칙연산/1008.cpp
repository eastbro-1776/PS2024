#include <iostream>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b ;

    cout << fixed;
    cout.precision(9);
    cout << a / b << '\n' ;

    // printf("%.9lf", a / b);
    
    return 0;
}