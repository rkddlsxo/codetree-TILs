#include <iostream>
#include <vector>
using namespace std;

int n;
bool * visited = new bool[n];
vector<int> answer;

void select(int num){
    if(num == n+1){
        for(int i=0; i<answer.size(); i++){
            cout << answer[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i=1; i<=n; i++){
        if(visited[i]){
            continue;
        }
        
        visited[i] =true;
        answer.push_back(i);
        select(num+1);
        answer.pop_back();
        visited[i] =false;

    }

}

int main() {
    cin >> n;
    // Please write your code here.
    select(1);
    return 0;
}
