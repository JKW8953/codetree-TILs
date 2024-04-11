#include <iostream>
#include <string>
using namespace std;

bool find369(int i){
    string str = to_string(i);
    for(int i=0;i<str.length();++i){
        if(str[i]=='3' || str[i]=='6' || str[i]=='9')
            return true;
    }
    return false;
}

bool target(int i){
    if(i%3==0 || find369(i))
        return true;
    else
        return false;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt=0;
    int a, b;
    cin >> a >> b;
    for(int i=a;i<=b;++i){
        if(target(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}