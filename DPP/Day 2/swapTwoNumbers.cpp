#include <iostream>
using namespace std;

int main()
{

    int a, b, temp;
    cout << "Enter the 1st value: ";
    cin >> a;
    cout << "Enter the 2nd value: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Enter the 1st value: " << a << endl;
    cout << "Enter the 1st value: " << b;

    return 0;
}