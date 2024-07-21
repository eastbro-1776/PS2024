#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    string n;
    int b;
    cin >> n >> b;

    int total = 0;
    for (int i = 0 ; i < n.length() ; i++){
        if (n[i] >= 'A'){
            total += (n[i] - 55) * pow(b,(n.length() - (1 + i)));
        }
        else{
            total += (n[i] - 48) * pow(b,(n.length() - (1 + i)));
        }
    }

    cout << total << '\n';
    return 0;
}