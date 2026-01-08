#include <iostream>
#include <vector> 

using namespace std;

vector<int> answer;
int n, m;
int A[20];
int max_xor = 0;

void select(int num, int cnt){
    if(num == n+1){
        if(cnt == m){
            int a = answer[0];
            for(int i=1; i<answer.size(); i++){
                a = a^answer[i];
            }
            if(max_xor < a){
                max_xor = a;
            }
        }
        return;
    }

    answer.push_back(num);
    select(num+1, cnt+1);
    answer.pop_back();
    select(num+1, cnt);
    
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    select(1,0);
    cout << max_xor;

    // Please write your code here.

    return 0;
}