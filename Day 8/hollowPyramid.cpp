/*

    *
   * *
  *   *
 *     *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n - row; space++)
        {
            cout << " ";
        }

        for (int col = 0; col <= row; col++)
        {
            if (row == n - 1 || col == 0 || col == row)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}