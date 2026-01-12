#include <iostream>

using namespace std;

int n, m;
int from[10000], to[10000];
int* visit = new int[n+1];
int cnt = 0;

void DFS(int vertex){
    visit[vertex] = true;
    for(int i=0; i<m; i++){
        if(from[i] == vertex && !visit[to[i]]){
            DFS(to[i]);
        }
        else if(to[i] == vertex && !visit[from[i]]){
            DFS(from[i]);
        }
    }
    return; 
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> from[i] >> to[i];
    }

    DFS(1);
    for(int i=0; i<n+1; i++){
        if(visit[i]){
            cnt++;
        }
    }
    cout << cnt-1;
    // Please write your code here.

    return 0;
}
