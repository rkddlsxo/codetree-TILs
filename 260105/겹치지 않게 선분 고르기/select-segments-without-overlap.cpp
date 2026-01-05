#include <iostream>
#include <vector>
using namespace std;

int n;
int x1[15], x2[15];
int count_max = 0;

vector<int> answer; 

void select(int num){
    if(num == n){
        int narray[1001] = {};
        
        for(int i=0; i<n; i++){
            if(answer[i] == 1){
                for(int j = x1[i]; j<=x2[i]; j++){
                narray[j]++;
                if(narray[j] >= 2){
                    return; 
                }
            }
            }
        }
        int cnt = 0; 
        for(int i=0; i<answer.size(); i++){
            if(answer[i] == 1){
                cnt++;
            }
        }
        if(count_max < cnt){
            count_max = cnt;
        }
        return;
    }

    for(int i=0; i<=1; i++){
        answer.push_back(i);
        select(num+1);
        answer.pop_back();
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    select(0);
    cout << count_max;
    // Please write your code here.

    return 0;
}
