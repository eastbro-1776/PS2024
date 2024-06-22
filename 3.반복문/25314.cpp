#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    n /= 4;
    while(n > 0){
        n--;
        cout << "long ";
    }
    cout <<"int\n";
    return 0;
}