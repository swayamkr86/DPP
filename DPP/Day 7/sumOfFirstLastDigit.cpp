#include <iostream>
using namespace std;

int main()
{

    int input, lastDigit;
    int firstDigit, sum;
    cout << "Enter your Value: ";
    cin >> input;

    lastDigit = input % 10;

    while (input != 0)
    {
        firstDigit = input % 10;
        input /= 10;
    }

    sum = firstDigit + lastDigit;
    cout << "Sum of First digit & Last Digit: " << sum;

    return 0;
}