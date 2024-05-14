#include <iostream>
using namespace std;

int main()
{

    int input, sum = 0;
    cout << "Enter your Value: ";
    cin >> input;

    for (int i = 1; i < input; i++)
    {
        if (input % i == 0)
        {
            sum += i;
        }
    }

    if (sum > input)
    {
        cout << input << " is an Abundant Number --> " << sum;
    }
    else
    {
        cout << input << " is Not an Abundant Number --> " << sum;
    }

    return 0;
}