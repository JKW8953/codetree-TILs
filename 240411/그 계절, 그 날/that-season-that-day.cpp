#include <iostream>
using namespace std;

bool leapyear(int Y){
    if(Y%4==0){
        if(Y%100==0){
            if(Y%400==0)
                return true;
            else
                return false;
        }
        return true;
    }
    return false;
}

bool existday(int Y, int M, int D){
    switch(M){
        case 2:
            if(leapyear(Y)){
                if(D>29)
                    return false;
                else
                    return true;
            }
            else{
                if(D>28)
                    return false;
                else
                    return true;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            if(D==31)
                return false;
            else
                return true;
        default:
            return true;
    }
}

int main() {
    int Y, M, D;
    cin >> Y >> M >> D;
    if(existday(Y, M, D)){
        switch(M){
            case 3:
            case 4:
            case 5:
                cout << "Spring";
                return 0;
            case 6:
            case 7:
            case 8:
                cout << "Summer";
                return 0;
            case 9:
            case 10:
            case 11:
                cout << "Fall";
                return 0;
            case 12:
            case 1:
            case 2:
                cout << "Winter";
                return 0;
        }
    }
    else{
        cout << -1;
        return 0;
    }
}