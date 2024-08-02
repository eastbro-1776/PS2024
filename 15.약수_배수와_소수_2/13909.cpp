#include <iostream>
#include <array>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool arr[n+1] = {1,};
    for (int i = 0 ; i < n ; i++){
        for (int j = 2 ; j <= sizeof(arr)/sizeof(*arr) ; j++){
            if (j % 2 == 0){
                if (arr[j]) arr[j] = false;
                else arr[j] = true;
            }
        }
    }

    int cnt = 0;
    for (int i = 1 ; i <= n ; i++){
        if (arr[i] == true) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}