#include <iostream>
#include <string>
#include <vector> 
using namespace std;

int expression_length;
string expression;
vector<int> number_list;
vector<char> oper_list;
int sum_max = -999999;

int dustks(int a, int b, char c){
    if(c == '+'){
        return a+b;
    }
    if(c == '-'){
        return a-b;
    }
    if(c == '*'){
        return a*b;
    }
}

int calculate(){
    vector<int> aa;
    for(int i=0; i<expression_length; i++){
        if(expression[i] == 'a'){
            aa.push_back(number_list[0]);
        }
        if(expression[i] == 'b'){
            aa.push_back(number_list[1]);
        }
        if(expression[i] == 'c'){
            aa.push_back(number_list[2]);
        }
        if(expression[i] == 'd'){
            aa.push_back(number_list[3]);
        }
        if(expression[i] == 'e'){
            aa.push_back(number_list[4]);
        }
        if(expression[i] == 'f'){
            aa.push_back(number_list[5]);
        }
    }

    int temp_num = aa[0];
    for(int i=0; i<expression_length/2; i++){
        temp_num = dustks(temp_num, aa[i+1],oper_list[i]);
    }

    return temp_num;

}


void select(int num){
    if(num == 6){
        int temp = calculate();
        if(temp > sum_max){
            sum_max = temp;
        }
        return;
    }

    for(int i=1; i<=4; i++){
        number_list.push_back(i);
        select(num+1);
        number_list.pop_back();
    }
}


int main() {
    cin >> expression;
    expression_length = expression.length();
    
    for(int i=1; i<expression_length; i=i+2){
        oper_list.push_back(expression[i]);
    }
    // Please write your code here.
    select(0);
    cout << sum_max;

    return 0;
}
