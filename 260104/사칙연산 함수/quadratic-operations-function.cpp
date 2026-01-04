#include <iostream>

using namespace std;

int a;
int c;
char o;

int add(int a, int c){
    return a+c;
}

int m(int a, int c){
    return a-c;
}

int mul(int a, int c){
    return a* c;
}

int divide(int a, int c){
    return a/c;
}

int main() {
    cin >> a >> o >> c;

    if(o == '+'){
        cout << a  <<" " << o  << " " << c<< " = "  << add(a,c);
    }

    else if(o == '-'){
        cout << a  <<" " << o  << " " << c<< " = " << m(a,c);
    }

    else if(o == '*'){
        cout<< a << " " << o << " " << c<< " = "<<mul(a,c);
    }

    else if(o == '/'){
        cout << a  <<" " << o  << " " << c<< " = " << divide(a,c);
    }

    else{
        cout << "False";
    }

    // Please write your code here.

    return 0;
}