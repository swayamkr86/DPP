#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int base, power;
    cout << "Enter the base value: ";
    cin >> base;
    cout << "Enter the power value: ";
    cin >> power;
    cout << "Answer: " << pow(base, power);

    return 0;
}