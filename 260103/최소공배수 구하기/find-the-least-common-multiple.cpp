#include <iostream>

using namespace std;

int n, m;

void asdf(int a, int b){
    for(int c = a; c <= a*b; c += a){
        if(c % b == 0){
            cout << c;
            return;
        }
    }
}

int main() {
    cin >> n >> m;
    asdf(n,m);
    // Please write your code here.

    return 0;
}