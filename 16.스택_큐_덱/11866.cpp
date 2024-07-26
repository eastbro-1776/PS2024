#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    queue<int> q;

    for (int i = 1; i <= n ; i++){
        q.push(i);
    }

    cout << '<';
    int i = 1;
    while (q.size() != 0){
        if (i % k == 0){
            cout << q.front();
            q.pop();

            if (q.empty()) cout << ">\n";
            else cout << ", ";
        }
        else{
            q.push(q.front());
            q.pop();
        }
        i++;
    }
    return 0;
}