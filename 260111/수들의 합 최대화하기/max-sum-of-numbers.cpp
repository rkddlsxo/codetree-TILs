#include <iostream>
#include <vector>
using namespace std;

int n;
int grid[10][10];
bool * visited = new bool[n];
vector<int> answer;
int sum_max = 0;

void select(int num){
    if(num == n){
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += grid[i][answer[i]];
        }
        if(sum > sum_max){
            sum_max = sum;
        }
        return;
    }

    for(int i=0; i<n; i++){
        if(visited[i]){
            continue;
        }
        visited[i] = true;
        answer.push_back(i);
        select(num+1);
        answer.pop_back();
        visited[i] = false;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    select(0);
    cout << sum_max;

    // Please write your code here.

    return 0;
}
