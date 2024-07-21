#include <iostream>
using namespace std;

int main(){
    int arr[6];
    for (int i = 0; i < 6; i++){
        cin >> arr[i];
        if (i <= 1) arr[i] = 1 - arr[i];
        else if (i <= 4) arr[i] = 2 - arr[i];
        else if (i <= 5) arr[i] = 8 - arr[i];
    }
    for (int i = 0; i < 6; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}