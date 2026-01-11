#include <iostream>
#include <cmath>

using namespace std;

int n, m;
int x[20], y[20];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int min_distance = 9999999;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(i== j){
                continue;
            }
            int distance = pow((x[i] - x[j]),2) + pow((y[i] - y[j]),2);
            if(distance < min_distance){
                min_distance = distance;
            }
        }
    }

    cout << min_distance;

    // Please write your code here.

    return 0;
}
