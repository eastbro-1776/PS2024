#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    string str;
    cin >> str;
    int ans = 0;

    for (int i=0;i<str.length();i++){
        int temp = str[i];
        if (temp >= 'A' && temp <= 'C') ans += 3;
        else if (temp >= 'D' && temp <= 'F') ans += 4;
        else if (temp >= 'G' && temp <= 'I') ans += 5;
        else if (temp >= 'J' && temp <= 'L') ans += 6;
        else if (temp >= 'M' && temp <= 'O') ans += 7;
        else if (temp >= 'P' && temp <= 'S') ans += 8;
        else if (temp >= 'T' && temp <= 'V') ans += 9;
        else if (temp >= 'W' && temp <= 'Z') ans += 10;
    }
    cout << ans << '\n';
    return 0;
}