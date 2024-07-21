#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int arr[26] = {0,};
    for (int i=0; i<str.length(); i++){
        if ((int)str[i] >= 97) arr[(int)str[i] - 'a']++;
        else arr[(int)str[i] - 'A']++;
    }
    int max = 0;
    int maxidx;
    char ch;
    for (int i = 0; i < 26; i++){
        if (max == arr[i]){
            ch = '?';
        }
        else if (max < arr[i]){
            max = arr[i];
            ch = i + 'A';
        }
    }
    cout << ch << '\n';

    return 0;
}