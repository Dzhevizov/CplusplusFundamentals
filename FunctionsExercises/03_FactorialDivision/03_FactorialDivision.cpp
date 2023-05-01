#include <iostream>
using namespace std;

double factorial(unsigned int nNum)
{
    if (nNum <= 1)
        return 1;

    return nNum * factorial(nNum - 1);
}


int main()
{
    unsigned int nNum1, nNum2;
    cin >> nNum1 >> nNum2;

    double nFactorial1 = factorial(nNum1);
    double nFactorial2 = factorial(nNum2);

    double dDivision = (nFactorial1) / (nFactorial2);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << dDivision << endl;

    return 0;
}
