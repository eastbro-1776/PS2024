#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int arr[26];
    for (int i = 0 ; i < 26; i++){
        arr[i] = -1;
    }
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++){
        if (arr[str[i]-'a'] == -1) arr[str[i]-'a'] = i;
    }
    for (int i = 0 ; i < 26; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}