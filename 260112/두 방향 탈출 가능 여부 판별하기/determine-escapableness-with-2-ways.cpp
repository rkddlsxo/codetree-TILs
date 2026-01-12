#include <iostream>
#include <vector> 

using namespace std;

int n, m;
int flag = 0;
int grid[100][100];
bool visited[100][100];
bool canGo(int x, int y){
    if(x >= n || y >= m){
        return false;
    }

    if(visited[x][y] == true){
        return false; 
    }

    if(grid[x][y] == 0){
        return false;
    }
    return true;
}

void DFS(int x_index, int y_index){
    int dx[2] = {1, 0};
    int dy[2] = {0, 1};
    if(x_index == n-1 && y_index == m-1){
        flag = 1;
    }
    visited[x_index][y_index] = true;
    for(int i=0; i<2; i++){
        int new_x = x_index + dx[i];
        int new_y = y_index + dy[i];
        if(canGo(new_x, new_y)){
            DFS(new_x, new_y);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    DFS(0,0);
    cout << flag;

    // Please write your code here.

    return 0;
}
