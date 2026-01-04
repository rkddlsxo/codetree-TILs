#include <iostream>

using namespace std;

int a, b;

bool is2(int n){
    for(int i = 2; i< n; i++){
        if(n%i == 0){
            return false;
        }
    }

    int sum = 0; 
    while(n > 10){
        sum += n%10; 

        n = n/10;
    }

    sum += n;

    if(sum%2 == 0){
        return true;
    }
    return false;
}

int main() {

    int cnt = 0;
    cin >> a >> b;
    for(int i=a; i<= b; i++){
        if(is2(i)){
            cnt++;
        }
    }

    cout << cnt;
    // Please write your code here.

    return 0;
}