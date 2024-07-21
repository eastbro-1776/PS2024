#include <iostream>
using namespace std;

int main(){
    int arr[100][100] = {0,};
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++){
        int x, y;
        cin >> x >> y;
        for (int j = y; j < y+10; j++){
            for (int k = x; k < x+10; k++){
                arr[j][k] = 1;
            }
        }
    }
    int area = 0;
    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            if (arr[i][j] == 1) area++;
        }
    }
    cout << area << '\n';
    return 0;
}