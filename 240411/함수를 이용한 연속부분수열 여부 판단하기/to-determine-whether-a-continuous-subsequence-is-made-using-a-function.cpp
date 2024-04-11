#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool check2(int i){
    for(int j=0;j<n2;++j){
            if(a[j+i]!=b[j])
                return false;
        }
        return true;
}


bool check(){
    for(int i=0;i<=n1-n2;++i){
        if(check2(i))
            return true;
    }
}


int main() {
    cin >> n1 >> n2;
    for(int i=0;i<n1;++i){
        cin >> a[i];
    }
    for(int i=0;i<n2;++i){
        cin >> b[i];
    }
    if(check())
        cout << "Yes";
    else
        cout << "No";
}