/* FIRST TRY
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n;

    int ds_arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> ds_arr[i];
    }
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    cin >> m;
    for (int i = 0 ; i < m ; i++){
        int temp;
        cin >> temp;

        for (int j = 0 ; j < n ; j++){
            if (ds_arr[j] == 0){
                int tmp;
                tmp = arr[j];
                arr[j] = temp;
                temp = tmp;
            }
            else{
                continue;
            }
        }
        cout << temp << ' ';
    }
    return 0;
}
*/

#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n;

    int ds_arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> ds_arr[i];
    }
    deque<int> d;
    for (int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        if (!ds_arr[i]) d.push_back(num);
    }
    cin >> m;
    for (int i = 0 ; i < m ; i++){
        int input;
        cin >> input;
        d.emplace_front(input);
        cout << d.back() << ' ';
        d.pop_back();
    }
    return 0;
}