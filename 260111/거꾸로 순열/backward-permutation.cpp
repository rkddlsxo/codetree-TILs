#include <iostream>
#include <vector> 
using namespace std;

vector<int> answer;
int n;
bool *visited = new bool[n+1];
void select(int num){
    if(num == n+1){
        for(int i=0; i<answer.size(); i++){
            cout << answer[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i=n; i>=1; i--){
        if(visited[i]){
            continue;
        }
        visited[i] = true;
        answer.push_back(i);
        select(num+1);
        answer.pop_back();
        visited[i] = false;
    }
}

int main() {
    cin >> n;
    select(1);
    // Please write your code here.

    return 0;
}
