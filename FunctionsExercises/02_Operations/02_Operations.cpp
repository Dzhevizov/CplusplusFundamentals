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


int main()
{
    int nNum1, nNum2;
    cin >> nNum1 >> nNum2;

    char chOperator;
    cin >> chOperator;

    switch (chOperator)
    {
    case '+': Addition(nNum1, nNum2); break;
    case '-': Subtraction(nNum1, nNum2); break;
    case '*': Multiplication(nNum1, nNum2); break;
    case '/': Division(nNum1, nNum2); break;
    }

    return 0;
}
