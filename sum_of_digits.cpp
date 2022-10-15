#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int digit;
    int sum = 0;
    
    cout << "Input a positive number:" << endl;
    cin >> number;

    while(number > 0)
    {
        digit = number % 10;
        number = number / 10;
        sum = sum + digit;
       
    }
    cout << "Sum of digits of your number is: " << sum;

    return 0;
}
