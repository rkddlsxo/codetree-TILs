#include <iostream>

using namespace std;

int a, b;

int isPrime(int a, int b){
    int sum = 0;
    for(int i=a; i<=b; i++){
        
        for(int j=2; j<i; j++){
            if(i%j == 0){
                break;
            }  
            if(j == i-1){
                sum += i;
            }
        }
    }

    return sum;
}

int main() {
    cin >> a >> b;
    cout << isPrime(a,b);
    // Please write your code here.

    return 0;
}