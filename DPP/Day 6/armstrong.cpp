#include <iostream>
#include <cmath>
using namespace std;

int sumOfDigit(int val)
{
    int count = 0;
    while (val != 0)
    {
        count++;
        val = val / 10;
    }
    return count;
}

int main()
{

    int val, digits;
    int power = 0;
    int sum = 0;
    int rem = 0;
    cout << "Enter the value: ";
    cin >> val;
    int value = val;
    digits = sumOfDigit(val);

    while (val != 0)
    {
        rem = val % 10;
        power = pow(rem, digits);
        sum += power;
        val = val / 10;
    }
    cout << sum << endl;

    if (sum == value)
    {
        cout << "Armstrong";
    }

    else
    {
        cout << "Not an Armstrong";
    }

    return 0;
}