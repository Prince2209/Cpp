#include <iostream>

using namespace std;

int main() {
    int x = 200, y = 50, z = 100;

    if(x > y && y > z){
    cout << "Hello \n";
    }

    if(z > y && z < x){
    cout << "C++ \n";              // Answer is C++, beacause this condition true, therefore this if block execute.
    }

    if((y+200) < x && (y+150) < z){
    cout << "Hello C++ \n";
    }

    return 0;
}