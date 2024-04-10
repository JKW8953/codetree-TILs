#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> st;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '(')
            st.push('(');
        else
        {
            if (st.empty() == false)
                st.pop();
            else
            {
                cout << "No";
                return 0;
            }
        }
    }
    if (st.empty() == false)
        cout << "No" << '\n';
    else
        cout << "Yes" << '\n';
    return 0;
}