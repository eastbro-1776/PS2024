#include <iostream>
#include <string>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int cnt = n;

    for (int i=0;i<n;i++){
        bool arr[26] = {false,};
        string s;
        cin >> s;
        arr[s[0]-'a'] = true;

        for (int j=1;j<s.length();j++){
            if (s[j] != s[j-1]){
                if (arr[s[j]-'a']==false){
                    arr[s[j]-'a'] = true;
                }
                else{
                    cnt--;
                    break;
                }
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}