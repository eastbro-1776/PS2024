#include <iostream>
#include <stack>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    stack<int> s;

    int order;
    while(n--){
        cin>>order;
        switch(order){
            case 1:
                int num;
                cin>>num;
                s.push(num);
                break;
            case 2:
                if(!s.empty()){
                    cout<<s.top()<<'\n';
                    s.pop();
                }else{
                    cout<<-1<<'\n';
                }
                break;
            case 3:
                cout<<s.size()<<'\n';
                break;
            case 4:
                if(!s.empty()){
                    cout<<0<<'\n';
                }else{
                    cout<<1<<'\n';
                }
                break;
            case 5:
                if(!s.empty()){
                    cout<<s.top()<<'\n';
                }else{
                    cout<<-1<<'\n';
                }
                break;
        }
    }
    return 0;
}