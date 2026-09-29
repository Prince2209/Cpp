// Question 2 : Write a C++ program that takes a year from the user and print whether
// that year is a leap year or not

#include<iostream>

using namespace std;

int main(){
    int year;

    cout << "Enter a year : ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is Leap Year.";
    }
    else{
        cout << year << " is not Leap Year.";
    }
    
    
    return 0;
}