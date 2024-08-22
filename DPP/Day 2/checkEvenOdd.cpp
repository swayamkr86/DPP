#include <iostream>
using namespace std;

int main()
{
    int val;
    cout << "Enter your value: ";
    cin >> val;

    if (val % 2 == 0)
    {
        cout << "Number is Even";
    }

    else
    {
        cout << "Number is Odd";
    }

    return 0;
}