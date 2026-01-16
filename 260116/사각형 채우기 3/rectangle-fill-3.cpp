#include <iostream>

using namespace std;

int n;
int dp[1001] = {};
int main() {
    cin >> n;
    dp[1] = 2;
    dp[2] = 7;
    dp[3] = 22;
    for(int i=4; i<=n; i++){
        dp[i] = (dp[i-1]*3 + 1)%10007;
    }
    cout << dp[n];
    // Please write your code here.

    return 0;
}
