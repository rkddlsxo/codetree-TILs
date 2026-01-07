#include <iostream>
#include <vector> 
using namespace std;

vector<int> answer;

int N, M;

void select(int num, int cnt){

    if(num == M){
        if(cnt == M){
            for(int i=0; i<M; i++){
                cout << answer[i] << " ";
            }
            cout << endl;
        }

        return;
    }
    
    for(int i=1; i<=N; i++){
        int p = 1;

        if(num == 0 || answer[num-1] < i){
            answer.push_back(i);
        }
        else{
            continue;
        }
        
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
