#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int cnt = str.length();
    for (int i=0; i<(int)str.length(); i++){
        if (str[i] == 'c'){
            if (str[i+1] == '=' || str[i+1] == '-'){
                i++;
                cnt--;
            }
        }
        if (str[i] == 'd'){
            if (str[i+1] == 'z'){
                if (str[i+2] == '='){
                    i += 2;
                    cnt -= 2;
                }
            }
            if (str[i+1] == '-'){
                i++;
                cnt--;
            }
        }
        if (str[i] == 'l'){
            if (str[i+1] == 'j'){
                i++;
                cnt--;
            }
        }   
        if (str[i] == 'n'){
            if (str[i+1] == 'j'){
                i++;
                cnt--;
            }
        }
        if (str[i] == 's'){
            if (str[i+1] == '='){
                i++;
                cnt--;
            }
        }
        if (str[i] == 'z'){
            if (str[i+1] == '='){
                i++;
                cnt--;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}