#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int input, binary = 0, i = 0;
    cout << "Enter Decimal number: ";
    cin >> input;

    while (input != 0)
    {
        int bit = (input & 1);
        binary = bit * pow(10, i++) + binary;
        input = input >> 1;
    }
    cout << "Binary value --> " << binary;

    return 0;
}