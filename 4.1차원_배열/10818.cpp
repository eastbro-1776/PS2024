#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    int max = 0, min = 1000001;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    cout << min << ' ' << max;
    return 0;
}