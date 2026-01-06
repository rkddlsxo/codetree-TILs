#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int K, N;

void select(int num){
    if(num == N){
        for(int i=0; i<N; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i=1; i<=K; i++){
        if(num < 2){
            arr.push_back(i);
            select(num+1);
            arr.pop_back();
        }
        if(num >= 2 && ((arr[num-2] != arr[num-1]) || arr[num-1] != i)){
            arr.push_back(i);
            select(num+1);
            arr.pop_back();
        }
    }
}




int main() {
    cin >> K >> N;

    // Please write your code here.
    select(0);
    return 0;
}
