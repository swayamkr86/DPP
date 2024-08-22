#include <iostream>
using namespace std;

int main()
{
    int val;
    int fact = 1;
    cout << "Enter the value: ";
    cin >> val;

    for (int i = 1; i <= val; i++)
    {
        fact *= i;
    }
    cout << "Answer: " << fact;

    return 0;
}