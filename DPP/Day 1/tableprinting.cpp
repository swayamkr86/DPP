#include <iostream>
using namespace std;

int main()
{

    cout << "Which number of table do you want to print: ";
    int num;
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}