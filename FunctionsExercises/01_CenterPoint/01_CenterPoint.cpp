#include <iostream>
#include <cmath>
using namespace std;

void PrintClosestToCenterPoint(double Xa, double Ya, double Xb, double Yb)
{
    double distanceA = sqrt(Xa * Xa + Ya * Ya);
    double distanceB = sqrt(Xb * Xb + Yb * Yb);

    if (distanceA <= distanceB)
        cout << "(" << Xa << ", " << Ya << ")" << endl;
    else
        cout << "(" << Xb << ", " << Yb << ")" << endl;
}

int main()
{
    double Xa, Ya, Xb, Yb;
    cin >> Xa >> Ya >> Xb >> Yb;

    PrintClosestToCenterPoint(Xa, Ya, Xb, Yb);

    return 0;
}
