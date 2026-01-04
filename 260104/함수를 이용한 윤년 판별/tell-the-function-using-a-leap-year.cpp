#include <iostream>

using namespace std;

int y;

bool isY(int n){
    if(n%4 != 0 ){
        return false;
    }

    if(n%100 == 0 && n%400 != 0){
        return false;
    }

    return true;

}

int main() {
    cin >> y;
    if(isY(y)){
        cout << "true";
    }

    else{
        cout << "false";
            }
    // Please write your code here.

    return 0;
}