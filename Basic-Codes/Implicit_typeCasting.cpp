// bool --> char --> int --> float --> double

#include <iostream>

using namespace std;

int main(){

    cout<< (10/3) << "\n";  // 3
    cout<< (10/3.0) << "\n";  // 3.33333
    cout<< (10.0/3) << "\n";  // 3.33333
    cout<< (10.0/3.0) << "\n";  // 3.33333

    cout<< ('A' + 1);  // 65 + 1 = 66

    return 0;
}