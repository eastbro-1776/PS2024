#include <iostream>
using namespace std;

long long GCD(long long a, long long b){
    long long r = a % b;
    if (r == 0){
        return b;
    }
    return GCD(b, r);
}

long long LCM(long long a, long long b){
    return a * b / GCD(a , b);
}

int main(){
    long long a, b;
    cin >> a >> b;
    cout << LCM(a, b) << '\n';
    return 0;
}