#include <iostream>

using namespace std;

int M, D;

int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

bool isc(int M, int D){
    if(M > 12){
        return false;
    }

    if(day[M-1] < D){
        return false;
    }

    return true;
}
int main() {
    cin >> M >> D;
    if(isc(M,D)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    // Please write your code here.

    return 0;
}