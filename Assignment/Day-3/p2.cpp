//Question 2 : WAP to print the multiplication table of a number, entered by the user.

#include<iostream>

using namespace std;

int main(){

    int num;

    cout << "Enter a num : ";
    cin >> num;

    cout << "Table of " << num << " is -> \n";
    for (int i = 1; i <= 10; i++)
    {
        cout << num << "x" << i << " = " << (num * i) << "\n";
    }
    

    return 0;
}