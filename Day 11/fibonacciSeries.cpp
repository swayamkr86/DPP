#include <iostream>
using namespace std;

int main()
{

    int nth, n1 = 0, n2 = 1, temp = 0;
    cout << "Enter the Value: ";
    cin >> nth;

    if (nth == 0)
    {
        cout << n1 << " ";
    }

    else if (nth == 1)
    {
        cout << n1 << " " << n2 << " ";
    }

    else
    {
        cout << n1 << " " << n2 << " ";
    }

    for (int i = 3; i <= nth; i++)
    {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        cout << temp << " ";
    }

    return 0;
}