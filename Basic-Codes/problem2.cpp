#include <iostream>

using namespace std;

int main(){

    int a;
    int b;
    int c;

    cout << "Enter value of a : ";
    cin >> a;
    
    cout << "Enter value of b : ";
    cin >> b;

    cout << "Enter value of c : ";
    cin >> c;

    // if (a > b)
    // {
    //     if (a > c)
    //     {
    //         cout << a << " is largest. \n";
    //     }
    //     else{
    //         cout << c << " is largest. \n";
    //     }
    // }
    // else{
    //     cout << b << " is largest. \n";
    // } 

    if ((a > b) && (a > c))
    {
         cout << a << " is largest. \n";
    }
    else if (b > c)
    {
        cout << b << " is largest. \n";
    }
    else{
        cout << c << " is largest. \n";
    }
    
    return 0;
}