// bool --> char --> int --> float --> double

#include <iostream>

using namespace std;

int main(){

    cout << (int)('A') << "\n";   // 65

    cout << ((float)10/3) << "\n";   // 3.33333
    cout << (10/(float)(3)) << "\n";   // 3.33333

    // cout << ('A' + 1)    // 66
    cout << (char)('A' + 1) << "\n";    // B


    cout << (bool)(3) + 3 << "\n";   // 4 
         // (bool)(3) == 1 therefore    1 + 3 = 4 

    cout << (bool)(0) + 3 << "\n";   // 3
         // (bool)(0) == 0 therefore    0 + 3 = 3


    cout << (23.5 + 2 + 'A') << "\n";   // 90.5    --> Big Data-type is float

    return 0;
}