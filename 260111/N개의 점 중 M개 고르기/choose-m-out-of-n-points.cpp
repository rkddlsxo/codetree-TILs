#include <iostream>
#include <cmath>
#include <vector> 

using namespace std;

int min_distance = 9999999;
int n, m;
int x[20], y[20];
vector <int> point;

void select(int num, int cnt){
    if(num == n){
        if(cnt == m){
            int local_min = 999999;
            for(int i=0; i<m; i++){
                for(int j=i; j<m; j++){
                    if(i == j){
                        continue;
                    }
                    int distance = pow(x[point[i]] - x[point[j]],2)+pow(y[point[i]] - y[point[j]],2);
                    if(distance < local_min){
                        local_min = distance;
                    }
                }
            }

            if(local_min < min_distance){
                min_distance = local_min;
            }
        }
        return; 
    }

    point.push_back(num);
    select(num+1, cnt+1);
    point.pop_back();
    select(num+1, cnt);
}


int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
   
    select(0,0);
    cout << min_distance;

    // Please write your code here.

    return 0;
}
