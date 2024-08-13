#include <iostream>
using namespace std;

int main(){
    int l, r, points;
    cin >> l >> r;

    if(l == 0 && r == 0) cout << "Not a moose\n";
    else if (l == r){
        points = l * 2;
        cout << "Even " << points << '\n';
    }
    else{
        if (l > r) points = l * 2;
        else points = r * 2;

        cout << "Odd " << points << '\n'; 
    }
    return 0;
}