#include <iostream>
#include <deque>
using namespace std;
int main() {
    int N;
    cin >> N;
    string command;
    deque<int> dq;
    while(N--){
        cin >> command;
        if (command == "push_front")
        {
            int X;
            cin >> X;
            dq.push_front(X);
        }

        else if (command == "push_back")
        {
            int X;
            cin >> X;
            dq.push_back(X);
        }

        else if (command == "pop_front")
        {
            cout << dq.front() << '\n';
            dq.pop_front();
        }

        else if (command == "pop_back")
        {
            
            cout << dq.back() << '\n';
            dq.pop_back();
        }

        else if (command == "size")
        {
            cout << dq.size() << '\n';
        }

        else if (command == "empty")
        {
            cout << int(dq.empty()) << '\n';
        }

        else if (command == "front")
        {
            cout << dq.front() << '\n';
        }

        else if (command == "back")
        {
            cout << dq.back() << '\n';
        }
    }
    return 0;
}