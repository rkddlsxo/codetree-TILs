#include <iostream>
#include <algorithm>

using namespace std;

int n;
int grid[100][100];
int dp [100][100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    dp[0][n-1] = grid[0][n-1];
    for(int i=n-2; i>=0; i--){
        dp[0][i] = grid[0][i] + dp[0][i+1];
    }
    for(int i=1; i<n; i++){
        dp[i][n-1] = grid[i][n-1] + dp[i-1][n-1];
    }

    for(int i=1; i< n; i++){
        for(int j=n-2; j >= 0; j--){
            dp[i][j] = grid[i][j] + min(dp[i][j+1], dp[i-1][j]);
        }
    }

    cout << dp[n-1][0];
    // Please write your code here.

    return 0;
}
