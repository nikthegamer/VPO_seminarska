# include <iostream>
using namespace std;

int main()
{
    while (1)
    {
    char op;
    float num1, num2;

    cout << "Enter + or - or * or /: ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 * num2 << endl;
        break;

    case '/':
        cout << num1 / num2 << endl;
        break;

    default:
        cout << "Error!";
        break;
    }
    }
    
}