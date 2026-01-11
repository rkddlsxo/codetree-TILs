#include <iostream>
#include <vector>
using namespace std;

int n;
int A[10][10];
bool* visited = new bool[n];
vector<int> answer;
int min_cost = 99999999;

void select(int num){
    if(num == n){
        int cost = 0;
        if(A[0][answer[0]] == 0){
            return;
        }
        cost += A[0][answer[0]];

        for(int i=0; i<n-2; i++){
            cost += A[answer[i]][answer[i+1]];
            if(A[answer[i]][answer[i+1]] == 0){
            return;
        }
        }        

        cost += A[answer[n-2]][0];
        if(A[answer[n-2]][0] == 0){
            return;
        }

        if(min_cost > cost){
            min_cost = cost;
        }
        return;
    }

    for(int i=1; i<n; i++){
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
            cin >> A[i][j];
        }
    }
    select(1);
    cout << min_cost;

    // Please write your code here.

    return 0;
}
