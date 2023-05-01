#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant < 0)
        cout << "no roots" << endl;
    else if (discriminant == 0)
    {
        double x = -b / (2 * a);
        cout << x << endl;
    }
    else
    {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << x1 << ' ' << x2 << endl;
    }
        
    return 0;
}
