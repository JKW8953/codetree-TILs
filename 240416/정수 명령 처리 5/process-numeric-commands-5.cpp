#include <iostream>
#include <vector>

using namespace std;

string menu[4] = {"push_back", "pop_back", "size", "get"};

int main() {
    int N, num;
    cin >> N;
    vector<int> vec;
    while(N--){
        string command;
        cin >> command;
        if(command==menu[0]){
            cin >> num;
            vec.push_back(num);
        }
        if(command==menu[1])
            vec.pop_back();
        if(command==menu[2])
            cout << vec.size() << '\n';
        if(command==menu[3]){
            cin >> num;
            cout << vec[num-1] << '\n';
        }
    }
    return 0;
}