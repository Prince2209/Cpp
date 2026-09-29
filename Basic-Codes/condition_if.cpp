#include <iostream>

using namespace std;

int main(){

    int age;

    cout << "Enter a age : ";
    cin >> age;
    
    if (age >= 18)
    {
        cout << "Can Vote" << "\n";
    }

    if (age >= 35)
    {
        cout << "Contest for elections" << "\n";
    }

    // Enter a age : 65
    // Can Vote
    // Contest for elections

    // It means entered age checked both if condition and true therefore both are print that's why else-if use. 

    return 0;
}