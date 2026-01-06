#include <iostream>

using namespace std;

int n;
int num[10];
int min_hop = 99999;

void select(int start_index, int hop){
    if(start_index == n-1){
        if(min_hop > hop){
            min_hop = hop;
        }
        return;
    }
    for(int i=1; i<=num[start_index]; i++){
        select(start_index+i, hop+1);

    }

}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    select(0,0);
    if(min_hop == 99999){
        cout << -1;
        return 0;
    }
    cout << min_hop;
    // Please write your code here.

    return 0;
}
