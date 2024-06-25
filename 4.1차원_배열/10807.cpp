#include <iostream>
using namespace std;

int main(){
    int n, v, cnt=0;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    
    cin >> v;
    for (int i=0; i<n; i++){
        if (arr[i] == v) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}