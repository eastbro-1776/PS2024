#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0 ; i < n ; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    for (int i = 0 ; i < n ; i++){
        if (arr[i] < x) cout << arr[i] << ' ';
    }
    return 0;
}