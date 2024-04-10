#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string command;
    queue<int> q;
    for (int i = 0; i < N; ++i)
    {
        cin >> command;
        if (command == "push")
        {
            int X;
            cin >> X;
            q.push(X);
        }

        else if (command == "pop")
        {
            cout << q.front() <<'\n';
            q.pop();
        }

        else if (command == "size")
        {
            cout << q.size() <<'\n';
        }

        else if (command == "empty")
        {
            cout << int(q.empty()) <<'\n';
        }

        else if (command == "front")
        {
            cout << q.front() <<'\n';
        }

        else if (command == "back")
        {
            cout << q.back() <<'\n';
        }
    }
}