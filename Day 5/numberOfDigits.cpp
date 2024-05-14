#include <iostream>
using namespace std;

int main()
{
    int num, rem;
    int count = 0;
    cout << "Enter the Value: ";
    cin >> num;
    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    cout << "Number od Digits: " << count;
}