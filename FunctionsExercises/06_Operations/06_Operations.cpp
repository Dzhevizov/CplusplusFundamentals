#include <iostream>
using namespace std;

void Addition(int a, int b)
{
    cout << a + b << endl;
}

void Subtraction(int a, int b)
{
    cout << a - b << endl;
}

void Multiplication(int a, int b)
{
    cout << a * b << endl;
}

void Division(int a, int b)
{
    if (b == 0)
        cout << "Can't divide by zero." << endl;
    else
        cout << a / b << endl;
}

void MakeCalculation(int nNum1, int nNum2)
{
    char chOperation;
    cin >> chOperation;

    switch (chOperation)
    {
    case '+': Addition(nNum1, nNum2); break;
    case '-': Subtraction(nNum1, nNum2); break;
    case '*': Multiplication(nNum1, nNum2); break;
    case '/': Division(nNum1, nNum2); break;
    default:
        cout << "try again" << endl;
        MakeCalculation(nNum1, nNum2);
        break;
    }
}

int main()
{
    int nNum1, nNum2;
    cin >> nNum1 >> nNum2;

    MakeCalculation(nNum1, nNum2);

    return 0;
}
