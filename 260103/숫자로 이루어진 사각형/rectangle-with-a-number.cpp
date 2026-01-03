#include <iostream>

using namespace std;

int N;

void printS(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        for(int i=0; i<n; i++){

            cout << start << " ";

            start++;
            if(start == 10){
                start = 1;
            }
            
        }
        cout << endl;
    }
}

int main() {
    cin >> N;
    printS(N);
    // Please write your code here.

    return 0;
}