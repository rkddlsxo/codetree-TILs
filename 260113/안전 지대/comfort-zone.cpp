#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int grid[50][50];
bool visited[50][50]; // bool 타입이 더 명확합니다.

void setGrid() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            visited[i][j] = false;
        }
    }
}

// 뭉치를 방문 처리만 하는 간단한 DFS
void DFS(int x, int y, int K) {
    visited[x][y] = true;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 범위 안이고, 방문 안 했고, K보다 높으면 이동
        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (!visited[nx][ny] && grid[nx][ny] > K) {
                DFS(nx, ny, K);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); // 속도 최적화
    cin >> N >> M;

    int max_h = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
            if (grid[i][j] > max_h) max_h = grid[i][j];
        }
    }

    int max_count = 0;
    int max_k = 1;

    // K가 1부터 지역 내 최대 높이까지만 탐색
    for (int K = 1; K <= max_h; K++) {
        setGrid();
        int current_islands = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                // 핵심: 여기서 미리 거르고 들어가야 함!
                if (!visited[i][j] && grid[i][j] > K) {
                    DFS(i, j, K);
                    current_islands++; // 새로운 뭉치 발견
                }
            }
        }

        if (current_islands > max_count) {
            max_count = current_islands;
            max_k = K;
        }
    }

    cout << max_count << " " << max_k;
    return 0;
}