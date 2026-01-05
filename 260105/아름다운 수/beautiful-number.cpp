#include <iostream>
#include <vector> 
using namespace std;

int n;
vector<int> answer;

int cnt = 0;
void Prints(int num){
    if(num == n+1){
        int index = 0;
        for(int i=0; i<n;){
            int aa = answer[i];
            if(i+aa > answer.size()){
                    return;
             } 
            for(int j=0; j<aa; j++){
                if(answer[i+j] != aa){
                    return;
                }
            }
            i = i+aa;
        }
        
        cnt++;
        return;
    }

    for(int i=1; i<=4; i++){
        answer.push_back(i);
        Prints(num+1);
        answer.pop_back();
    }

}

int main() {
    cin >> n;
    Prints(1);
    cout << cnt;
    // Please write your code here.

    return 0;
}
