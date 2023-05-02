#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string strInput;
	getline(cin, strInput);
	istringstream oStream(strInput);

	int nOpenedBrackets = 0;
	char CurrentSymbol;
	bool isValid = true;

	while (oStream >> CurrentSymbol)
	{
		if (CurrentSymbol == '(')
			nOpenedBrackets++;
		else if (CurrentSymbol == ')')
			nOpenedBrackets--;

		if (nOpenedBrackets < 0)
		{
			isValid = false;
			break;
		}
	}

	if (nOpenedBrackets > 0)
		isValid = false;

	if (!isValid)
		cout << "incorrect" << endl;
	else
		cout << "correct" << endl;

	return 0;
}

