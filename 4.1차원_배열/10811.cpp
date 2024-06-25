#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[n+1];
    for (int i = 0; i <= n; i++){
        arr[i] = i;
    }

    for (int a = 0; a < m; a++){
        int i, j;
        cin >> i >> j;
        int temp;
        for (int x = 0; x <= (j-i)/2; x++){
            swap(arr[i + x], arr[j - x]);
        }
    }
    for (int i = 1; i <= n; i++){
        cout << arr[i] << ' '; 
    }
    return 0;
}