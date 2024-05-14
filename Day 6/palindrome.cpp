#include <iostream>
using namespace std;

int main()
{

    int val, pal;
    int rem = 0;
    int rev = 0;
    cout << "Enter the value: ";
    cin >> val;
    pal = val;

    while (val != 0)
    {
        rem = val % 10;
        rev = rev * 10 + rem;
        val = val / 10;
    }

    if (rev == pal)
    {
        cout << "Palindrome";
    }

    else
    {
        cout << "Not a Palindrome";
    }

    return 0;
}