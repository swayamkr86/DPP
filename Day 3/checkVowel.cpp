#include <iostream>
using namespace std;

int main()
{

    char input;
    cout << "Enter the character: ";
    cin >> input;

    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonent";
    }

    return 0;
}