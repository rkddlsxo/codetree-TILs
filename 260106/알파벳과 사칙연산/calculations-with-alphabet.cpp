#include <iostream>
#include <string>
#include <vector> 
using namespace std;

int expression_length;
string expression;
int number_list[6] = {};
vector<char> oper_list;

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

void calculate(int list[], char oper[], int expression_length){
    int current_val = list[0];
    for(int i=0; i<expression_length; i++){
        if(expression[i] == 'a'){

        }
        if(expression[i] == 'a'){
            
        }
    }
}



int main() {
    cin >> expression;
    expression_length = expression.length();
    
    for(int i=1; i<expression_length; i=i+2){
        oper_list.push_back(expression[i]);
    }
    // Please write your code here.

    return 0;
}
