// Extract One digit and print the digit

#include<iostream>

using namespace std;

int main(){

    int num;

    int rem;

    cout << "Enter a number : ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;

        cout << rem << " ";        // Last Digit print

        num /= 10;
    }

    return 0;
}