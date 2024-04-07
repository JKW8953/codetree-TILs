#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> vec;

    for (int i = 0; i < N; ++i)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    for (int i = 0; i < N - 1; ++i)
    {
        for (int j = 0; j < N - 1 - i; ++j)
        {
            if (vec[j] > vec[j + 1])
                swap(vec[j], vec[j + 1]);
        }
    }

    for (int i = 0; i < N; ++i)
    {
        cout << vec[i] << " ";
    }

    return 0;
}