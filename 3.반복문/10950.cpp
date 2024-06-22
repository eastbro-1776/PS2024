#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t; 
    
    while (t > 0){
        t--;
        int a, b;
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return 0;
}