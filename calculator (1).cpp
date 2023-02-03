#include <iostream>

using namespace std;

main()
{

    char op;
    double num1, num2;

    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    cout << "Enter the operation " << endl;
    cin >> op;


    if (op == '+')
    {
        cout << num1 + num2 << endl;
    }

    if (op == '-')
    {
        cout << num1 - num2 << endl;
    }

    if (op == '*')
    {
        cout << num1 * num2 << endl;
    }

    if (op == '/')
    {
        cout << num1 / num2 << endl;
    }

}
