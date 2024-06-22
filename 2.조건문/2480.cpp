#include <iostream>
using namespace std;

int main(){
     int a, b, c, res;
     cin >> a >> b >> c;

     if (a==b && b==c) res = 10000 + a * 1000;
     else if (a == b || b == c || a == c){
        if (a == c) res = 1000 + a * 100;
        else res = 1000 + b * 100;
     }
     else{
        if (a > b && a > c) res = a * 100;
        if (b > a && b > c) res = b * 100;
        if (c > b && c > a) res = c * 100;
     }  
     // #include <algorithm> res = max(max(a,b), max(b,c)) * 100;

     cout << res << '\n';
    return 0;
}