#include <iostream>
using namespace std;

int GCD(int a, int b){
    int r = a % b;
    if (r == 0){
        return b;
    }
    return GCD(b, r);
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int dstnce[n];
    for (int i = 0 ; i < n - 1 ; i++){
        dstnce[i] = arr[i + 1] - arr[i];
    }
    
    int gcd = dstnce[0], cnt = 0;
    for (int i = 1 ; i < n - 1 ; i++){
        gcd = GCD(gcd, dstnce[i]);
    }
    for (int i = 0 ; i < n - 1 ; i++){
        cnt += (dstnce[i] / gcd) - 1;
    }

    cout << cnt << '\n';
    return 0;
}