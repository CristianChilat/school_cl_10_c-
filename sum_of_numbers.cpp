#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int sum = 0;
    cout << "Input a positive number:" << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    cout << "Sum of 1+2+...+n = " << sum;

    return 0;
}
