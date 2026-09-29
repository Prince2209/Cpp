// Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a
//              pen and an eraser. You have to output the total cost of the items back to the user as
//              their bill.
//              (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
//              problem

#include<iostream>

using namespace std;

int main(){

    float cost_of_pen,cost_of_pencil,cost_of_eraser;

    cout << "Enter a cost of pen : ";
    cin >> cost_of_pen;

    cout << "Enter a cost of pencil : ";
    cin >> cost_of_pencil;

    cout << "Enter a cost of eraser : ";
    cin >> cost_of_eraser;

    float total_cost = cost_of_pen + cost_of_pencil + cost_of_eraser;

    float total_cost_with_GST = total_cost + total_cost*0.18;

    cout << "Total cost is : " << total_cost << " Rs\n";

    cout << "Final Amount With GST: " << total_cost_with_GST << " Rs";

    return 0;
}