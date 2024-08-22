#include <iostream>
using namespace std;

int main()
{

    int val;
    int rem = 0;
    int rev = 0;
    cout << "Enter the value: ";
    cin >> val;

    while (val != 0)
    {
        rem = val % 10;
        rev = rev * 10 + rem;
        val = val / 10;
    }

    cout << "Reverse number: " << rev;

    return 0;
}