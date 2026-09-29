// #include<iostream>

// using namespace std;

// int main(){

//     int num;

//     cout << "Enter a number : ";
//     cin >> num;

//     bool isPrime = true;

//     if (num < 0)
//     {
//         isPrime = false;
//     }
//     else{
//         for (int i = 2; i <= num/2; i++)
//         {
//             if (num % i == 0)
//             {
//                 isPrime = false;
//             }
//         }
//     }
    
//     if (isPrime)
//     {
//         cout << num << " is Prime.";
//     }
//     else
//     {
//         cout << num << " is Not Prime.";
//     }
    
    
    

//     return 0;
// }



#include<iostream>

using namespace std;

int main(){

    int num;

    cout << "Enter a number : ";
    cin >> num;

    bool isPrime = true;

    if (num < 0)
    {
        isPrime = false;
    }
    else{
        for (int i = 2; i <= num-1; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    
    if (isPrime)
    {
        cout << num << " is Prime.";
    }
    else
    {
        cout << num << " is Not Prime.";
    }
    
    
    

    return 0;
}