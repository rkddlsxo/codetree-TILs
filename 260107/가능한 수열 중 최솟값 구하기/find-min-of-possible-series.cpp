#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> arr;

bool isPossible() {
    int len = arr.size();
    for (int i = 1; i <= len / 2; i++) {
        bool isSame = true;

        for (int j = 0; j < i; j++) {
            if (arr[len - 1 - j] != arr[len - 1 - i - j]) {
                isSame = false;
                break;
            }
        }

        if (isSame) return false;
    }
    
    return true;
}

int flag = 0;

void select(int num){
    if(flag == 1){
        return;
    }

    if(num == n){
        
        flag = 1;
        for(int i=0; i<n; i++){
            cout << arr[i];
        }
        
        return;
    }

    for(int i=4; i<=6; i++){
        arr.push_back(i);
        if(isPossible()){
            select(num+1);
        }
        arr.pop_back();
    }
}

int main() {
    cin >> n;

    // Please write your code here.
    select(0);
    return 0;
}
