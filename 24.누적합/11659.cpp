#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int arr[n+1];
    arr[0] = 0;
    
    for (int i = 1; i <= n ; i++){
        int num;
        cin >> num;
        arr[i] = arr[i - 1] + num;
    }

    for (int l = 0; l < m; l++){
        int i, j;
        cin >> i >> j;
        int ans = arr[j] - arr[i - 1];
        cout << ans << '\n';
    }
    return 0;
}