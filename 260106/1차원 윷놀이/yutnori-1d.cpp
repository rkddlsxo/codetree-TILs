#include <iostream>
#include <vector>
using namespace std;

int n, m, k;
int nums[12];
vector<int> horse_num;
int max_score = 0;

void select(int num){
    if(num == n){
        int score[12] = {};
        int cnt = 0;
        for(int i=0; i<n; i++){
            score[horse_num[i]-1] += nums[i];
        }

        for(int i=0; i<12; i++){
            if(1+score[i] >= m){
                cnt++;
            }
        }
        if(cnt > max_score){
            max_score = cnt;
        }
        return;

    }

    for(int i=1; i<=k; i++){
        horse_num.push_back(i);
        select(num+1);
        horse_num.pop_back();
    }
} 


int main() {
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    select(0);
    cout << max_score;

    // Please write your code here.

    return 0;
}
