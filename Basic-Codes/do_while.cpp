#include<iostream>

using namespace std;

int main(){

    int i = 1;
    do
    {
        cout << i << "\n";
        i++;
    } while (i>5);      // Condition false but do-While loop execute always one time.
    
    return 0;
}