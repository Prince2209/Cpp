// Question 4 : Write a program to calculate the area of a circle.
// Input : r (radius)
// Output : PI*r*r (area)

#include<iostream>
using namespace std;

int main(){
    const float PI = 3.14;      // Constant
    float radius;

    cout << "Enter a radius : ";
    cin >> radius;

    float area = PI * radius * radius;

    cout << "Area of Circle is : " << area;

    return 0;
}