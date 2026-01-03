#include <iostream>

using namespace std;

int n, m;

int gcd(int n, int m){
    
    if(n > m){
        if(n%m == 0){
            return m;
        }
        return gcd(n%m,m);
    }

    else{
        if(m%n == 0){
            return n;
        }
        return gcd(m,m%n);
    }
}

int main() {
    cin >> n >> m;
    cout << gcd(n,m);
    // Please write your code here.

    return 0;
}