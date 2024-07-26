#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    deque<int> d;
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        int input, num;
        cin >> input;
        switch(input){
            case 1 :
                cin >> num;
                d.emplace_front(num);
                break;
            case 2 :
                cin >> num;
                d.emplace_back(num);
                break;
            case 3 :
                if (d.empty()) cout << "-1\n";
                else{
                    cout << d.front() << '\n';
                    d.pop_front();
                }
                break;
            case 4 :
                if (d.empty()) cout << "-1\n";
                else{
                    cout << d.back() << '\n';
                    d.pop_back();
                }
                break;
            case 5 :
                cout << d.size() << '\n';
                break;
            case 6 :
                cout << d.empty() << '\n';
                break;
            case 7 :
                if (d.empty()) cout << "-1\n";
                else cout << d.front() << '\n';
                break;
            case 8 :
                if (d.empty()) cout << "-1\n";
                else cout << d.back() << '\n';
                break;
        }
    }
    return 0;
}