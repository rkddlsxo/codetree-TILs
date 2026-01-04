#include <iostream>

using namespace std;

int Y, M, D;

int day_no[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int day_yes[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

bool isY(int Y){
    if(Y%4 != 0){
        return false;
    }

    if(Y%100 == 0){
        if(Y%400 == 0){
            return true;
        }
        return false;
    }

    return true; 
}

bool isc(int Y, int M, int D){
    if(M > 12){
        return false;
    }

    if(isY(Y)){
        if(day_yes[M-1] < D){
            return false;
        }
    }
    else{
        if(day_no[M-1] < D){
            return false;
        }
    }

    return true;
}

void season(int M){
    if(M == 3 || M == 4 || M == 5){
        cout << "Spring";
    }
    else if(M == 6 || M == 7 || M == 8){
        cout << "Summer";
    }
    else if (M == 9 || M == 10 || M == 11){
        cout << "Fall";
    }
    else {
        cout << "Winter";
    }
}



int main() {
    cin >> Y >> M >> D;
    if(isc(Y,M,D)){
        season(M);
    }
    else{
        cout << -1;
    }
    // Please write your code here.

    return 0;
}