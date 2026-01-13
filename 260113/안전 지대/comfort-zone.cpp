#include <iostream>
#include <vector>
using namespace std;

int N, M;
int grid[50][50];
int visited[50][50];
void setGrid(){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            visited[i][j] = false;
        }
    }
}

bool canGo(int x,int y,int K){
    if(x<0 || y<0 || x>=N || y>=M){
        return false; 
    }

    if(visited[x][y] == true){
        return false;
    }

    if(grid[x][y] <= K){
        return false;
    }

    return true;
}

int DFS(int x_index, int y_index, int K){
    if(visited[x_index][y_index] == true || grid[x_index][y_index] <= K){
        return 0;
    }

    visited[x_index][y_index] = true;
    int count = 0;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    for(int i=0; i<4; i++){
        int new_x = x_index + dx[i];
        int new_y = y_index + dy[i];
        if(canGo(new_x, new_y,K)){
            count += DFS(new_x,new_y,K);
        }
    }
    return 1 + count;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }
    int max_count = 0;
    int max_k;

    for(int K=1; K<=100; K++){
        setGrid();
        int count = 0;
        for (int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                int num = DFS(i,j,K);
                if(num != 0){
                    count++;
                }
            }
        }
        if(count > max_count){
            max_count = count;
            max_k = K;
        }
    }

    cout << max_count << " " << max_k;

    // Please write your code here.

    return 0;
}
