#include <iostream>

using namespace std;

int n;

void asdf(int n){
    if(n%2 == 1){
        cout << "No" << endl;
        return;
    }

    int sum = 0;
    while(n > 10){
        sum += n%10;
        n = n/10;
    }

    sum = sum + n;

    if(sum % 5 != 0){
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;

}

int main() {
    cin >> n;
    asdf(n);
    // Please write your code here.

    return 0;
}