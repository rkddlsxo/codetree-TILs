#include <iostream>

using namespace std;

int n;
int arr[50];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] %2 == 0){
            cout << arr[i]/2 << " ";
        }
        else{
            cout << arr[i] << " ";
        }
    }

    

    // Please write your code here.

    return 0;
}