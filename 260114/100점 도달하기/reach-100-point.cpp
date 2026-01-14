#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int c;
    cin >> c;
    for(int i=c; i<=100; i++){
        if(i < 60){
            cout << "F" << " ";
        }
        if(i >= 60 &&  i < 70){
            cout << "D" << " ";
        }
        if(i >= 70 &&  i < 80){
            cout << "C" << " ";
        }
        if(i >= 80 &&  i < 90){
            cout << "B" << " ";
        }
        if(i >= 90){
            cout << "A" << " ";
        }
       
    }
    return 0;
}