#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[n+1];
    for (int i=1; i<=n; i++){
        arr[i] = i;
    }

    for (int a=0; a<m; a++){
        int i, j, temp;
        cin >> i >> j;

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i=1; i<=n; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}