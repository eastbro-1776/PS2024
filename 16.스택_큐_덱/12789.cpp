#include <iostream>
#include <stack>
using namespace std;

int main(){
    int arr[1001];
    int n, num = 1, cnt = 0;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
    stack<int> s;
    for (int i = 0 ; i < n ; i ++){
        if (s.empty() && cnt < n){
            s.push(arr[cnt++]);
        }
        while (s.top() != num && cnt < n){
            s.push(arr[cnt++]);
        }

        if (!s.empty() && s.top() == num){
            s.pop();
            num++;
        }
        else{
            cout << "Sad\n";
            return 0;
        }
    }
    cout << "Nice\n";
    return 0;
}