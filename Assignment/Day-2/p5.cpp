// Question 5 : For any 3 digit number check whether it’s an Armstrong number or not.
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// Eg : 371 is an armstrong number.
// 3*3*3 + 7*7*7 + 1*1*1 = 371

#include<iostream>
#include <cmath>

using namespace std;

int main(){

    int num,res=0,count=0;
    int temp,rem;

    cout << "Enter a number : ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        temp /= 10;
        count++;
    }

    temp = num;                    // Trap

    while (temp != 0) {
        rem = temp % 10;
        
        // round() handles potential floating-point inaccuracies from pow()
        res += round(pow(rem, count)); 
        
        temp /= 10;
    }

    if (res == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}