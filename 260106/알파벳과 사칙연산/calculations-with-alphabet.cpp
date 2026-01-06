#include <iostream>
#include <string>
#include <vector>

using namespace std;
int string_len;
vector<char> oper;
string expression;
vector<int> number;
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

void select(int num){
    if(num == (string_len+1)/2){
        vector<char> oper1; 
        int aa;
        for(int i=0; i<oper.size(); i++){
            oper1.push_back(oper[i]);
        }
        int temp_num = number[0];
        for(int i=0; i<string_len/2; i++){
            aa = dustks(temp_num, number[i+1],oper1[oper1.size()-1-i]);
            temp_num = aa;
        }

        if(temp_num > max_sum){
            max_sum = temp_num;
        }
        return;
    }

    for(int i=1; i<=4;i++){
        number.push_back(i);
        select(num+1);
        number.pop_back();
    }

}

int main() {
    cin >> expression;

    // Please write your code here.
    string_len = expression.length();
    
    for(int i=string_len-2; i>0; i = i -2){
        oper.push_back(expression[i]);
    }

    select(0);

    cout << max_sum;
    

    return 0;
}
