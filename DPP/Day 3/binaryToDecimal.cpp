#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int input, decimal = 0, i = 0;
    cout << "Enter Binary number: ";
    cin >> input;

    while (input != 0)
    {
        int bit = input % 10;
        decimal = bit * pow(2, i++) + decimal;
        input /= 10;
    }
    cout << "Decimal value --> " << decimal;

    return 0;
}