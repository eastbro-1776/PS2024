#include <iostream>
#include <stack>
#include <string>

using namespace std;

typedef pair<int, int> pairs;
deque<pairs> d;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, value;
    cin >> n;
	
    for (int i=0; i<n; i++) {
        cin >> value;
        d.emplace_back(i+1, value);
    }

    while (!d.empty()) {
        pairs b = d.front();
        cout << b.first << ' ';
        d.pop_front();

        for (int i=1 ; i<b.second; i++) {
            d.emplace_back(d.front());
            d.pop_front();
        }
        
        for (int i=0; i>b.second; i--) {
            d.emplace_front(d.back());
            d.pop_back();
        }
    }
}