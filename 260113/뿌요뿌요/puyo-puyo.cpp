#include <iostream>
#include <vector>

using namespace std;

bool visited[100][100];
int n;
int grid[100][100];

bool cango(int x, int y, int k){
    if(visited[x][y] == true){
        return false;
    }
    if(x<0 || y<0 || x>=n || y>=n){
        return false;
    }
    if(grid[x][y] != k){
        return false;
    }
    return true;
}

int DFS(int x, int y){
    int k = grid[x][y];
    if(visited[x][y] == true || grid[x][y] != k){
        return 0;
    }
    int count = 0;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    visited[x][y] = true;
    for(int i=0; i<4; i++){
        int new_x = x+dx[i];
        int new_y = y+dy[i];
        if(cango(new_x,new_y,k)){
            count += DFS(new_x,new_y);
        }
    }

    return 1+count;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    int max_num = 0;
    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int num = DFS(i,j);
            if(num >= 4){
                count++;
            }
            if(num > max_num){
                max_num = num;
            }
        }
    }


    cout << count << " " << max_num;
    

    // Please write your code here.

    return 0;
}
