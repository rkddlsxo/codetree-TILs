#include <iostream>
#include <vector> 
using namespace std;

int n;
int grid[20][20];
int bomb_grid[20][20];
int max1 = 0;
int bomb_count;
vector<int> bomb;

void gridReset(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            bomb_grid[i][j] = grid[i][j];
        }
    }
}

void test(int num, int max_num){
    if(num == max_num){
        int bomb_index = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    int kind = bomb[bomb_index];
                    bomb_index++;

                    if(kind == 1){
                        if(i-2 >= 0){
                        bomb_grid[i-2][j] = 1;
                        }
                        if(i-1 >= 0){
                        bomb_grid[i-1][j] = 1;
                        }
                        bomb_grid[i][j] = 1;
                        if(i+1 < n){
                        bomb_grid[i+1][j] = 1;
                        }
                        if(i+2 < n){
                        bomb_grid[i+2][j] = 1;
                        }
                    }
                    
                    else if(kind == 2){
                        if(j-1 >= 0){
                        bomb_grid[i][j-1] = 1;
                        }
                        if(i-1 >= 0){
                        bomb_grid[i-1][j] = 1;
                        }
                        bomb_grid[i][j] = 1;
                        if(i+1 < n){
                        bomb_grid[i+1][j] = 1;
                        }
                        if(j+1 < n){
                        bomb_grid[i][j+1] = 1;
                        }
                    }
                    else if(kind == 3){
                        if(j-1 >= 0 && i-1 >= 0){
                        bomb_grid[i-1][j-1] = 1;
                        }
                        if(j+1 < n && i-1 >= 0){
                        bomb_grid[i-1][j+1] = 1;
                        }
                        bomb_grid[i][j] = 1;
                        if(j-1 >= 0 && i+1 < n){
                        bomb_grid[i+1][j-1] = 1;
                        }
                        if(j+1 < n && i+1 < n){
                        bomb_grid[i+1][j+1] = 1;
                        }
                    }
                }
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(bomb_grid[i][j] == 1){
                    count++;
                }
            }
        }
        if(count > max1){
            max1 = count;
        }
        gridReset();

        return;
    }

    for(int i=1; i<=3; i++){
        bomb.push_back(i);
        test(num+1,bomb_count);
        bomb.pop_back();
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    gridReset();
    bomb_count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(grid[i][j] == 1){
                bomb_count++;
            }
        }
    }

    test(0,bomb_count);
    cout << max1;




    // Please write your code here.

    return 0;
}
