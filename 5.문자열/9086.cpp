#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        string str;
        cin >> str;
        cout << str.front() << str.back() << '\n';
    }
    return 0;
}