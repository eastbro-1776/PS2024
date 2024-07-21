#include <iostream>
using namespace std;

int main(){
    int arr[9][9];
    for (int i=0;i<9;i++){
        for (int j=0;j<9;j++){
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    int max_x = 0, max_y = 0;

    for (int i=0;i<9;i++){
        for (int j=0;j<9;j++){
            if (max < arr[i][j]){
                max = arr[i][j];
                max_y = i;
                max_x = j;
            }
        }
    }

    cout << max << '\n' << max_y + 1 << ' ' << max_x + 1 << '\n';
    return 0;
}