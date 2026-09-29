// Question 3 : WAP to input a number and check whether the number is an Armstrong
// number or not.
// An Armstrong number is a number that is equal to the sum of cubes of its digits.

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int num,count=0,rem,res=0;

    cout << "Enter a num : ";
    cin >> num;

    int temp = num;

    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;

        res += round(pow(rem,count));

        temp /= 10;
    }
    
    if (res == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
    
    return 0;
}