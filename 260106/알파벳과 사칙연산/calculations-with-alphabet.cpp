#include <iostream>
#include <string>
#include <vector>

using namespace std;
int string_len;
vector<char> oper;
string expression;
int max_sum = -999999;

int dustks(int num1, int num2, char oper){
    if(oper == '+'){
        return num1 + num2; 
    }
    if(oper == '-'){
        return num1 - num2; 
    }
    if(oper == '*'){
        return num1 * num2;
    }
}

void select(int num, int current_value){
    if(num == (string_len+1)/2){
        if(current_value > max_sum){
            max_sum = current_value;
        }
        return;
    }

    for(int i=1; i<=4;i++){
        if(num == 0){
            select(num+1, i);
        }
        else{
            int next_value = dustks(current_value, i, oper[num-1]);
            select(num+1, next_value);
        }
    }

}

int main() {
    cin >> expression;

    // Please write your code here.
    string_len = expression.length();
    
    for(int i=1; i<expression.length(); i = i+2){
        oper.push_back(expression[i]);
    }

    select(0,0);

    cout << max_sum;
    

    return 0;
}
