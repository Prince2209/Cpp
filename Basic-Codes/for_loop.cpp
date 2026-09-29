#include<iostream>

using namespace std;

int main(){

    // This gives error because we don't defined i variable.
    // i variable defined only in for loop and for loop access this variable don't access in outside the for loop { } block.

    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << i << " ";
    // }
    
    // cout << "\n";
    // cout << "Last value of i is = " << i;


    // -------------------------------------------------------------------------------



    int i;

    for (i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    
    cout << "\n";
    cout << "Last value of i is = " << i;

    return 0;
}