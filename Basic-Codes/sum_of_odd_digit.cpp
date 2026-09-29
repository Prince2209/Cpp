// input : 12345
// output : 1 + 3 + 5 = 9

#include<iostream>

using namespace std;

int main(){

    int num;

    int rem,sum_of_odd_digit=0;

    cout << "Enter a number : ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        
        // This Condition Add for odd digit otherwise as sum of digit
        if (rem % 2 != 0)
        {
            sum_of_odd_digit += rem;
        }

        num /= 10;
    }
    
    cout << "Sum of Odd Digit is : " << sum_of_odd_digit;

    return 0;
}