#include <iostream>
using namespace std;

int main()
{

    int input;
    cout << "Enter your Value: ";
    cin >> input;

    for (int i = 1; i <= input; i++)
    {
        int count = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            cout << "Prime number --> " << i << endl;
        }
    }

    return 0;
}
