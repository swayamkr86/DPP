/*

*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter any number: ";
    cin >> n;

    // for the triangle (half portion)
    for (int row = 0; row < n; row++)
    {

        // for the 1st triangle --> *
        for (int col = 0; col <= row; col++)
        {
            cout << "*";
        }

        // for the 2st triangle --> "  "(space)
        for (int space = 1; space < n - row; space++)
        {
            cout << "  ";
        }

        // for the 3rd triangle --> *
        for (int col = 0; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // for inverted triangle (remaining half portion)
    for (int row = 0; row < n; row++)
    {
        // for the 1st inverted triangle --> *
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }

        // for the 2st inverted triangle --> "  "(space)
        for (int space = 1; space <= row; space++)
        {
            cout << "  ";
        }

        // for the 1st inverted triangle --> *
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}