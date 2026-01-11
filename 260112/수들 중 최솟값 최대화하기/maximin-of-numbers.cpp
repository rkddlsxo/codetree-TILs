#include <iostream>
#include <vector> 
using namespace std;

int n;
int grid[10][10];
bool * visited = new bool[n];
vector<int> answer;
int max_min = 0;

void select(int num){
    if(num == n){
        int local_min = 999999;
        for(int i=0; i<n; i++){
            if(local_min > grid[i][answer[i]]){
                local_min = grid[i][answer[i]];
            }
        }

        if(max_min < local_min){
            max_min = local_min;
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
    cout << max_min;

    // Please write your code here.

    return 0;
}
