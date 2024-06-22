#include <iostream>
using namespace std;

int main(){
    int x, n, sum = 0;
    cin >> x >> n;
    while(n > 0){
        n--;
        int a, b;
        cin >> a >> b; 
        sum += a * b;
    }
    if(x == sum) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}