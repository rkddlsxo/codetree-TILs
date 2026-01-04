#include <iostream>

using namespace std;

int a, b;

bool isO(int n){
    if(n%2 == 0){
        return true;
    }

    if(n%10 == 5){
        return true;
    }

    if(n%3 == 0 && n% 9 != 0){
        return true;
    }

    return false;
}

int main() {
    cin >> a >> b;
    int cnt = 0;
    for(int i=a; i<= b; i++){
        if(!isO(i)){
            cnt++;
        }
    }   

    cout << cnt;
    // Please write your code here.

    return 0;
}