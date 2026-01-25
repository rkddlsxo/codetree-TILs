#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; 
    cin >> n;
    int s = 0;
    for(int i=1; i<=100; i++){
        s += i;
        if(s >= n){
            cout << i;
            break;
        }
    }

    return 0;
}