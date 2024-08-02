#include <iostream>
#include <deque>
#include <cmath>
using namespace std;

int main(){
    int n, b;
    cin >> n >> b;

    deque<char> d;
    int i = 1;
    while(1){
        if (pow(b, i) > n) break;
        else i++;
    }
    
    for (int j = i - 1 ; j >= 0  ; j--){
        char temp = n % pow(b, j) - 55;
        d.push_front(temp);
        n 
    }
    // A 10 = 65 , Z 35 = 90    
    return 0;
}