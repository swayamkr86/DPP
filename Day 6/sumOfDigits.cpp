#include <iostream>
using namespace std;

int main()
{

    int val;
    int rem = 0;
    int sum = 0;
    cout << "Enter the value: ";
    cin >> val;

    while (val != 0)
    {
        rem = val % 10;
        sum += rem;
        val = val / 10;
    }

    cout << "Sum of digit: " << sum;

    return 0;
}