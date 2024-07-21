#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int ans = 1;
    for (int i=0; i<str.length()/2; i++){
        if (str[i] != str[str.length() - 1 - i]) ans = 0;
    }

    cout << ans << '\n';
    return 0;
}