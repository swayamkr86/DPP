#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter any Value: ";
    cin >> n;

    cout << "Enter Kth bit: ";
    cin >> k;

    int mast = 1 << k;
    int ans = n | mast;

    cout << "Value after setting the Kth bit: " << ans;

    return 0;
}