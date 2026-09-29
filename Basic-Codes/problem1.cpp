#include <iostream>

using namespace std;

int main(){

    int income;
    float tax;
    float total_income;

    cout << "Enter a income : ";
    cin >> income;
    
    if (income < 500000)
    {
        tax = income * 0;
    }
    else if (income < 1000000)
    {
        tax = income * 0.2;
    }
    else                           
    {                                               
        tax = income * 0.3;                                              
    }                                               

    total_income = income - tax;

    cout << "Tax Calculate based on income is : " << tax << "\n";

    cout << "Total income after tax calculate is :" << total_income << "\n";
    

    return 0;
}