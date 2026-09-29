// Extract All digit and print in the one result

#include<iostream>

using namespace std;

int main(){

    int num;

    int rem,res=0;

    cout << "Enter a number : ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;

        res = res*10 + rem;        // Print in one result

        num /= 10;
    }

    cout << "Result is = " << res;

    return 0;
}