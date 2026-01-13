#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int grid[25][25];
int visit[25][25];
vector<int> answer;

bool canGo(int x, int y){
    if(grid[x][y] == 0){
        return false;
    }
    if(x >= n ||  y >= n || x < 0 || y < 0){
        return false;
    }
    if(visit[x][y] == true){
        return false;
    }
    return true;
} 

int DFS(int x_index, int y_index){
    if(visit[x_index][y_index] || grid[x_index][y_index] == 0){
        return 0;
    }
    int count = 0;
    int dx[4] = {1,0,-1,0}; // 하 우 상 좌 
    int dy[4] = {0,1,0,-1};
    visit[x_index][y_index] = true;

    for(int i=0; i<4; i++){
        int new_x = x_index + dx[i];
        int new_y = y_index + dy[i];
        if(canGo(new_x, new_y)){
            count += DFS(new_x, new_y);
        }
    }
    return 1 + count;
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int num = DFS(i,j);
            if(num != 0){
                answer.push_back(num);
            }
        }
    }

    cout << answer.size() << endl;
    sort(answer.begin(), answer.end());
    for(int i=0; i<answer.size(); i++){
        cout << answer[i] << endl;
    }
    

    // Please write your code here.

    return 0;
}
