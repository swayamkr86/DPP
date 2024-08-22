/*

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

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
        int num = 1;

        for (int space = 0; space < n - row; space++)
        {
            cout << " ";
        }

        for (int col = 0; col <= row; col++)
        {
            cout << num << " ";
            num = num * (row - col) / (col + 1);
        }

        cout << endl;
    }

    return 0;
}