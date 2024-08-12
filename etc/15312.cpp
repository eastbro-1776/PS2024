#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
    string a, b;
    cin >> a >> b;
    
    vector<int> v;
    for (int i = 0; i < a.length() ; i++){
        v.push_back(arr[a[i] - 'A']);
        v.push_back(arr[b[i] - 'A']);
    }

    while(1){
        vector<int> temp;
        for (int i = 0 ; i < v.size() - 1 ; i++){
            temp.push_back((v[i] + v[i + 1]) % 10);
        }

        v = temp;
        if (v.size() == 2){
            cout << v[0] << v[1] << '\n';
            break;
        }
    }

    return 0;
}