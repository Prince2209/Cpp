#include<iostream>

using namespace std;

int main(){
    char op;
    float x,y;

    cout << "Enter a value of x : ";
    cin >> x;

    cout << "Enter a value of y : ";
    cin >> y;

    cout << "Enter a one choice from this (+,-,*,/) : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "x + y = " << (x + y) << "\n";
        break;

    case '-':
        cout << "x - y = " << (x - y) << "\n";
        break;
    
    case '*':
        cout << "x * y = " << (x * y) << "\n";
        break;

    case '/':
        cout << "x / y = " << (x / y) << "\n";
        break;
    
    default:
        cout << "Invalid Operator";
    }

    return 0;
}