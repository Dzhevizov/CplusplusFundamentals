#include <iostream>
using namespace std;

void DefineGrades(double dGrade)
{
	if (dGrade < 3.00)
		cout << "Fail" << endl;
	else if (dGrade < 3.50)
		cout << "Poor" << endl;
	else if (dGrade < 4.50)
		cout << "Good" << endl;
	else if (dGrade < 5.50)
		cout << "Very good" << endl;
	else if (dGrade <= 6.00)
		cout << "Excellent" << endl;
}

int main()
{
	double dGrade;
	cin >> dGrade;

	DefineGrades(dGrade);
	return 0;
}
