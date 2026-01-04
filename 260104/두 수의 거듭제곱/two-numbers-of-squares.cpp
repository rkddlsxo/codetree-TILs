#include <iostream>
#include <cmath>

using namespace std;

int a, b;

int pw(int a, int b){
    return pow(a, b);
}

int main() {
    cin >> a >> b;
    cout << pw(a,b);
    // Please write your code here.

    return 0;
}