#include <iostream>
#include <vector> 
using namespace std;

vector<int> answer;

int N, M;

void select(int num, int cnt){

    if(num == M){
        if(cnt == M){
            for(int i=0; i<M; i++){
                cout << answer[M-i-1] << " ";
            }
            cout << endl;
        }

        return;
    }
    int p = 1;
    for(int i=1; i<=N; i++){
        answer.push_back(i);
        for(int j=0; j<num; j++){
            if(p == 0){
                break;
            }
            if(answer[j] == i){
                p = 0;
            }
        }

        select(num + 1, cnt+p);
        answer.pop_back();
    }
}




int main() {
    cin >> N >> M;

    // Please write your code here.
    select(0,0);
    return 0;
}
