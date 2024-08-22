/*

1
2 3
4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;

int main()
{

    int n, count = 1;
    cout << "Enter numbers of rows: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }

    return 0;
}