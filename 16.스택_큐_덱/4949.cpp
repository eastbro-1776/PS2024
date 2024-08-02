#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    while(1){
        string input;
        stack<char> s;
        getline(cin, input);
        bool res = true;

        if (input.length() == 1 && input[0] == '.') break;

        for (int i = 0; i < input.length(); i++){
            if (input[i] == '[' || input[i] == '(')
                s.push(input[i]);
            
            if (input[i] == ']'){
                if (!s.empty() && s.top() == '['){
                    s.pop();
                }
                else{
                    res = false;
                    break;
                }
            }
            else if (input[i] == ')'){
                if (!s.empty() && s.top() == '('){
                    s.pop();
                }
                else {
                    res = false;
                    break;
                }
            }
        }
        if (s.empty() && res) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}