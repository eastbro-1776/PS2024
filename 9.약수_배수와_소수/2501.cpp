#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 1 ; i <= sqrt(n) ; i++){
        if (n % i == 0){
            v.push_back(i);
            if (i != n / i) v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    
    if (k > v.size()) cout << "0\n";
    else cout << v.at(--k) << '\n';
    return 0;
}