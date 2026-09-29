// WAP where user can keep entering numbers till they enter a multiple of 10.
// if Number is multiple of 10 then You can't enter a new number

#include<iostream>

using namespace std;

int main(){

    int num;

    do{
        cout << "Enter a number : ";
        cin >> num;

        if (num % 10 == 0)
        {
            cout << "You entered " << num  << " is multiple of 10 \n";
            break;
        }
        
    }while (true);

    return 0;
}

