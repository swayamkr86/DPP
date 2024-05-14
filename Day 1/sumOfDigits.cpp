#include <iostream>
using namespace std;

int main()
{

    int total;
    int num;
    int sum = 0;
    cout << "Total number of digits: ";
    cin >> total;

    for (int i = 1; i <= total; i++)
    {
        cout << "Enter your digit " << i << ": ";
        cin >> num;
        sum += num;
    }
    cout << "Sum of digit: " << sum;

    return 0;
}