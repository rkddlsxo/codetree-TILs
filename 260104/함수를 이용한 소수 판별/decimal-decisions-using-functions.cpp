#include <iostream>

using namespace std;

int a, b;

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

int sumP(int a, int b){
    int sum = 0;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            sum += i;
        }
    }

    return sum;
}

int main() {
    cin >> a >> b;
    cout << sumP(a,b);
    // Please write your code here.

    return 0;
}