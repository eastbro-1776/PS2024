#include <iostream>
using namespace std;

int main(){
    bool arr[31] = {false,};
    for (int i = 0; i < 28; i++){
        int a;
        cin >> a;
        arr[a] = true;
    }

    for (int i=1; i<=30; i++){
        if (arr[i] == false) cout << i << '\n';
    }
    return 0;
}