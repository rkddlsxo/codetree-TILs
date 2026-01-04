#include <iostream>

using namespace std;

int a, b;

bool is3(int a){
    if(a % 3 == 0){
        return true;
    }

    else return false;
}

bool isInclude(int n){
    while(n >= 10){
        int c = n%10; 
        if(c == 3 || c == 6 || c == 9){
            return true;
        }
        n = n / 10;
    }

    if(n == 3 || n == 6 || n == 9){
            return true;
    }

    else{
        return false;
    }
}

void asdf(int a, int b){
    int cnt = 0;
    for(int i =a; i<=b; i++){
        if(isInclude(i)){
            cnt++;
        }
        else{
            if(is3(i)){
                cnt++;
            }
        }
    }

    cout << cnt;
}

int main() {
    cin >> a >> b;
    asdf(a,b);
    // Please write your code here.

    return 0;
}