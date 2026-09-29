#include<iostream>
#include<cmath>         // Math Library Use

using namespace std;

int main(){

    int num;

    cout << "Enter a number : ";
    cin >> num;

    bool isPrime = true;

    if (num < 0)
    {
        isPrime = false;
    }
    else{
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)       // (i is factor of n)  <--or-->  (i completely divides n)  <--or-->  (n is non-prime)
            {
                isPrime = false;
                break;
            }
        }
    }
    
    if (isPrime)
    {
        cout << num << " is Prime.";
    }
    else
    {
        cout << num << " is Not Prime.";
    }
    
    
    

    return 0;
}