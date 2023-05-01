#include <iostream>
using namespace std;

int CalculateRectArea(int a, int b)
{
    return a * b;
}

int main()
{
    int width, height;
    cin >> width >> height;

    int area = CalculateRectArea(width, height);
    cout << area << endl;
    return 0;
}
