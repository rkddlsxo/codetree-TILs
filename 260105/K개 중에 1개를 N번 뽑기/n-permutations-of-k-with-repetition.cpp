#include <iostream>
#include <vector>

using namespace std;

int K, N;

vector<int> answer;

void PrintN(int num){
    if(num == N+1){
        for(int i=0; i<N; i++){
            cout << answer[i] << " ";   
        }
        cout << endl;
        return;
    }

    for(int i=1; i<=K; i++){
        answer.push_back(i);
        PrintN(num+1);
        answer.pop_back();
    }

    return;
}

int main() {
    cin >> K >> N;

    PrintN(1);

    // Please write your code here.

    return 0;
}
