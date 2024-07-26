#include <iostream>
#include <cmath>
#include <deque>
using namespace std;

int main(){
    int n;
    cin >> n;

    deque<int> d;
    for (int i = 1; i <= n; i++){
        d.emplace_back(i);
    }

    for (int i = 0; i < n; i++){
        int t;
        cin >> t;

        cout << d.front() << '\n';
        d.pop_front();

        if (!d.empty()){
            if (t > 0){
                for (int j = 0; j < t; j++){
                    d.emplace_back(d.front());
                    d.pop_front();
                }
            } 
            else{
                for (int j = 0; j < abs(t); j++){
                    d.emplace_front(d.back());
                    d.pop_back();
                }
            }
        }
    }
    return 0;
}