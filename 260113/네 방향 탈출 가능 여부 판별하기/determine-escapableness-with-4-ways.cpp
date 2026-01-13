#include <iostream>
#include <vector>
#include <queue>


using namespace std;

queue<pair<int,int>> q;
int n, m;
int a[100][100];
int visited[100][100];
int flag = 0;

bool canGo(int x, int y){
    if(x <0 || y < 0 || x >= n || y >= m){
        return false;
    }
    if(a[x][y] == 0){
        return false;
    }
    if(visited[x][y] == true){
        return false;
    }
    return true;
}

void BFS(){
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};

    while(!q.empty()){
        pair<int,int> curr_pos = q.front();
        q.pop();

        int x = curr_pos.first;
        int y = curr_pos.second;
        for(int i=0; i<4; i++){
            int new_x = x+dx[i];
            int new_y = y+dy[i];
            if(canGo(new_x, new_y)){
                visited[new_x][new_y] = true;
                q.push(make_pair(new_x,new_y));
                if(new_x == n-1 && new_y == m-1){
                    flag = 1;
                }
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    q.push(make_pair(0,0));
    BFS();
    cout << flag;
    // Please write your code here.

    return 0;
}
