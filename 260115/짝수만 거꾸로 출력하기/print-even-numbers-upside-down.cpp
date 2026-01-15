#include <iostream>
#include <stack>
using namespace std;

int main() {
    int a;
    cin >> a;
    stack <int> s;
    for(int i=0; i<a; i++){
        int b;
        cin >> b;
        if(b %2 == 0){
            s.push(b);
        }
    }

    int n = s.size();
    for(int i=0; i<n; i++){
        cout << s.top() << " ";
        s.pop();
    }
    
    // Please write your code here.
    return 0;
}