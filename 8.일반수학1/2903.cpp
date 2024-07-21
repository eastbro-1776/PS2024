#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 2;
    while (n--) ans = ans * 2 - 1;
    cout << pow(ans, 2) << '\n';
    return 0;
}