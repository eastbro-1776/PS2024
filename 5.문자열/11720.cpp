#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;

    int sum = 0;
    for (int i=0; i<n; i++){
        sum += (int)str[i] - '0';
    }
    cout << sum << '\n';
    return 0;
}