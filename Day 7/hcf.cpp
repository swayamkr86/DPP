#include <iostream>
using namespace std;

int main()
{

    int inp1, inp2;
    cout << "Enter the 1st Value: ";
    cin >> inp1;
    cout << "Enter the 2nd Value: ";
    cin >> inp2;

    while (inp1 > 0 && inp2 > 0)
    {
        if (inp1 > inp2)
        {
            inp1 %= inp2;
        }
        else
        {
            inp2 %= inp1;
        }
    }

    if (inp1 == 0)
    {
        cout << "HCF of the numbers: " << inp2;
    }

    else
    {
        cout << "HCF of the numbers: " << inp1;
    }

    return 0;
}