#include <iostream>
using namespace std;

int main(){
    bool arr[42] = {false,};
    for (int i=0; i<10; i++){
        int a;
        cin >> a;
        arr[a % 42] =  true;
    }

    int cnt = 0;
    for (int i=0; i<42; i++){
        if (arr[i] == true) cnt++;
    }
    
    cout << cnt << '\n';
    return 0;
}