#include <iostream>

using namespace std;

int n;
int num[4][4];
int move_dir[4][4];
int r, c;
int max_hop = 0;

void move(int x_index, int y_index, int hop){
    if(max_hop < hop){
        max_hop = hop;
    }
    int next_x_index = x_index;
    int next_y_index = y_index;

    if(move_dir[x_index][y_index] == 1){
        while(next_x_index >= 0){
            next_x_index--;
            if(num[x_index][y_index] < num[next_x_index][next_y_index]){
                move(next_x_index,next_y_index,hop+1);
            }
        }
    }
    if(move_dir[x_index][y_index] == 2){
        while(next_x_index >= 0 && next_y_index < n){
            next_x_index--;
            next_y_index++;
            if(num[x_index][y_index] < num[next_x_index][next_y_index]){
                move(next_x_index,next_y_index,hop+1);
            }
        }
    }
    if(move_dir[x_index][y_index] == 3){
        while(next_y_index < n){
            next_y_index++;
            if(num[x_index][y_index] < num[next_x_index][next_y_index]){
                move(next_x_index,next_y_index,hop+1);
            }
        }
    }
    if(move_dir[x_index][y_index] == 4){
        while(next_x_index < n && next_y_index < n){
            next_x_index++;
            next_y_index++;
            if(num[x_index][y_index] < num[next_x_index][next_y_index]){
                move(next_x_index,next_y_index,hop+1);
            }
        }
    }
    if(move_dir[x_index][y_index] == 5){
        while(next_x_index < n){
            next_x_index++;
            if(num[x_index][y_index] < num[next_x_index][next_y_index]){
                move(next_x_index,next_y_index,hop+1);
            }
        }
    }
    if(move_dir[x_index][y_index] == 6){
        while(next_x_index < n && next_y_index >=0){
            next_x_index++;
            next_y_index--;
            if(num[x_index][y_index] < num[next_x_index][next_y_index]){
                move(next_x_index,next_y_index,hop+1);
            }
        }
    }
    if(move_dir[x_index][y_index] == 7){
        while(next_y_index >=0){
            next_y_index--;
            if(num[x_index][y_index] < num[next_x_index][next_y_index]){
                move(next_x_index,next_y_index,hop+1);
            }
        }
    }
    if(move_dir[x_index][y_index] == 8){
        while(next_x_index >=0 && next_y_index >=0){
            next_x_index--;
            next_y_index--;
            if(num[x_index][y_index] < num[next_x_index][next_y_index]){
                move(next_x_index,next_y_index,hop+1);
            }
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> num[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> move_dir[i][j];

    cin >> r >> c;

    move(r-1,c-1,0);
    cout << max_hop;
    // Please write your code here.

    return 0;
}
