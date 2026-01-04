#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool isB(int a[],int b[],int a_size, int b_size){
    if(a_size < b_size){
        return false;
    }
    int a_index, b_index;
    for(int i=0; i<a_size; i++){
        if(a[i] == b[0]){
            a_index = i;
            if(i+b_size > a_size){
                return false;
            }

            for(int k=i; k<i+b_size; k++){
                if(a[k] != b[k-a_index]){
                    return false;
                }
            }
        }
    }

    return true;


}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    if(isB(a,b,n1,n2)){
        cout << "Yes";
    // Please write your code here.
    }
    else{
        cout << "No";
    }
    return 0;
}