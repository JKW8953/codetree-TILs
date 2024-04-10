#include <iostream>
#include <stack>
using namespace std;
int main() {
    int N;
    cin >> N;
    string command;
    stack<int> st;
    for (int i = 0; i < N; ++i)
    {
        cin >> command;
        if (command == "push")
        {
            int X;
            cin >> X;
            st.push(X);
        }

        else if (command == "pop")
        {
            cout << st.top() <<'\n';
            st.pop();
        }

        else if (command == "size")
        {
            cout << st.size() <<'\n';
        }

        else if (command == "empty")
        {
            cout << int(st.empty()) <<'\n';
        }

        else if (command == "top")
        {
            cout << st.top() <<'\n';
        }
    }
    return 0;
}