#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double arr[n];
    int max = -1;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout<<fixed;
    cout.precision(3);

    double sum = 0;
    for (int i = 0; i < n; i++){
        arr[i] = arr[i] / max * 100;
        sum += arr[i];
    }
    cout << sum / n << '\n';
    return 0;
}