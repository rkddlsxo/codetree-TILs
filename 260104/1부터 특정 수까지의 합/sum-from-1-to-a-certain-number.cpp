#include <iostream>
using namespace std;

int sumN(int N){
    return (1+N)*N/2;
}

int main() {
    // Please write your code here.
    int a;
    cin >> a;
    cout << sumN(a)/10;
    return 0;
}