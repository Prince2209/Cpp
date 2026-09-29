// Question 3 : Build a Simple Interest Calculator.
// Input : principal (P), rate (R), time (T)
// Output : (P*R*T) / 100

#include<iostream>

using namespace std;

int main(){

    float principal,rate,time;

    cout << "Enter a principal : ";
    cin >> principal;

    cout << "Enter a rate : ";
    cin >> rate;

    cout << "Enter a time in years : ";
    cin >> time;

    float Interest_Calculate = (principal*rate*time)/100;

    cout << "Interest is : " << Interest_Calculate << " rs\n";

    float Total_Amount = principal + Interest_Calculate;

    cout << "Total Amount is : " << Total_Amount << " rs";

    return 0;
}