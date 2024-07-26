#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int n;
    cin >> n;

    for (int i = 0 ; i < n ; i++){
        int input;
        cin >> input;
        if (input == 0){
            s.pop();
        }
        else s.push(input);
    }

    int total = 0;
    while(!s.empty()){
        total += s.top();
        s.pop();
    }
    cout << total << '\n';
    return 0;
}