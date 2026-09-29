// Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.
// (Assume N >= 2)

#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter a number for print all prime number between 2 to n : ";
    cin >> n;

    cout << "All Prime number between 2 to " << n << " is : ";
    for (int i = 2; i <= n; i++)
    {
        int curr = i;           // current number to check for
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++)
        {
            if (curr % j == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime)
        {
            cout << curr << " ";
        }
    }

    
    

    return 0;
}