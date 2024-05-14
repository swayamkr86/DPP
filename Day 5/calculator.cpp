#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result = 0;
    char op;

    cout << "Enter the 1st value: ";
    cin >> num1;

    cout << "Enter the 2st value: ";
    cin >> num2;

    cout << "Enter the operation: ";
    cin >> op;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "Answer: " << result;
        break;

    case '-':
        result = num1 - num2;
        cout << "Answer: " << result;
        break;

    case '*':
        result = num1 * num2;
        cout << "Answer: " << result;
        break;

    case '/':
        result = num1 / num2;
        cout << "Answer: " << result;
        break;

    case '%':
        result = num1 % num2;
        cout << "Answer: " << result;
        break;

    default:
        cout << "Invalid output...Please retry!!";
        break;
    }

    return 0;
}