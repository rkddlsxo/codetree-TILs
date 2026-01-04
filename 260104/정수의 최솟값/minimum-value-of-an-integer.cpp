#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c;

int aa(int a, int b, int c){
    int q = min(a,min(b,c));
    return q;
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout << aa(a,b,c);
    return 0;
}