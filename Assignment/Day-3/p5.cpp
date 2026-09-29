// Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.
// (Assume N >= 2)
// Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ….
// This is a series where each number is a sum of previous 2 numbers in the series.
// Eg : 1 = 0 + 1,
// 2 = 1 + 1,
// 3 = 1 + 2,
// 5 = 2 + 3,
// 8 = 3 + 5 & so on.

#include<iostream>

using namespace std;

int main(){

    int num_of_terms,third;

    cout << "Enter a number of terms in fibonacci series : ";
    cin >> num_of_terms;

    int first = 0;
    int second = 1;

    cout << "Fibonacci Series is : ";

    cout << first << " ";
    cout << second << " ";

    for (int i = 1; i <= num_of_terms-2; i++)
    {
        third = first + second;

        cout << third << " ";

        first = second; 
        second = third;
    }
    
    cout << "\n";

    return 0;
}