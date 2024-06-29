#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    string cmd;
    int S;
    while(q--){
        cin >> cmd;
        int x;
        if (cmd == "add"){
            cin >> x;
            if (!((S >> x) & 1)) S = S + (1 << x);
        }

        else if (cmd == "delete"){
            cin >> x;
            if ((S >> x) & 1) S = S - (1 << x);
        }

        else if (cmd == "print"){
            cin >> x;
            cout << ((S >> x) & 1 ? 1 : 0) << '\n';
        }

        else if (cmd == "toggle"){
            cin >> x;
            S = S ^ (1 << x);
        }

        else{
            S = 0;
        }
    }
    return 0;
}