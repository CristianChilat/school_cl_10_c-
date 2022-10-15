#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int digit;
    int inversedNumber = 0;
    
    cout << "Input a positive number:" << endl;
    cin >> number;

    while(number > 0)
    {
        digit = number % 10;
        inversedNumber = (inversedNumber * 10) + digit; 
        number = number / 10;
    }
    cout << "Your inversed number is: " << inversedNumber;

    return 0;
}
