#include<iostream>

using namespace std;

int main(){

    float s1,s2,s3;

    cout << "Enter mark of subject-1 : ";
    cin >> s1;

    cout << "Enter mark of subject-2 : ";
    cin >> s2;

    cout << "Enter mark of subject-3 : ";
    cin >> s3;

    float avg = (s1+s2+s3)/3;

    cout << "Avg of all subject mark is : " << avg;

    return 0;
}