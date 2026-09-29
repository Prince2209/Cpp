// WAP to show numbers entered by user except multiples of 10.
// if Number is multiple of 10 then You can't print the number

#include<iostream>

using namespace std;

int main(){

    int num;

    do{
        cout << "Enter a number : ";
        cin >> num;

        if (num % 10 == 0)
        {
            continue;
        }

        cout << "Your entered Num is : " << num  << "\n";
        
    }while (true);

    return 0;
}

