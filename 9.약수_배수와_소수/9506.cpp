#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int input;
    while(1){
        vector<int> v;
        cin >> input;

        if (input == -1) break;
        for (int i = 1 ; i <= sqrt(input) ; i++){
            if (input % i == 0){
                v.push_back(i);
                if (i != input / i) v.push_back(input / i);
            }
        }
        sort(v.begin(), v.end());
        int sum = 0;
        for (int i = 0 ; i < v.size() - 1; i++){
            sum += v[i];
        }
        
        if (input == sum){
            cout << input << " = ";
            for (int i = 0; i < v.size() - 2 ; i++){
                cout << v[i] << " + ";
            }
            cout << v[v.size() - 2]<< '\n';
        }
        else {
            cout << input << " is NOT perfect.\n";
        }
    }
    return 0;
}