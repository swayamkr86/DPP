#include <iostream>
using namespace std;

int main()
{

    int p, r, t, cal;
    cout << "Principle: ";
    cin >> p;
    cout << "Rate: ";
    cin >> r;
    cout << "Time: ";
    cin >> t;

    cal = (p * r * t) / 100;

    cout << "Simple Interest will be: " << cal;

    return 0;
}