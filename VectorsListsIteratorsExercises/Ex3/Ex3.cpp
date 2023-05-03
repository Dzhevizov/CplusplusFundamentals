#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void initVector(istringstream& oStream, vector <int>& oVector)
{
    int nNumber;
    while (oStream >> nNumber)
        oVector.push_back(nNumber);
}

int main()
{
    int nPipesCount = 0;
    string strInstallation, strCheckup;

    cin >> nPipesCount;
    cin.ignore();
    getline(cin, strCheckup);
    getline(cin, strInstallation);
    
    istringstream oCheckup(strCheckup);
    istringstream oInstallation(strInstallation);
    
    vector <int> vectorCheckup;
    vector <int> vectorInstallation;
    
    initVector(oCheckup, vectorCheckup);
    initVector(oInstallation, vectorInstallation);
    
    vector <int> vectorDifferences;

    for (int i = 0; i < nPipesCount; i++)
    {
        int nCurrent = 0;
        nCurrent = vectorInstallation[i] - vectorCheckup[i];
        vectorDifferences.push_back(nCurrent);
    }

    vector <int> vectorLifetimes;

    for (int i = 0; i < nPipesCount; i++)
    {
        int nCurrent = 0;
        nCurrent = vectorInstallation[i] / vectorDifferences[i];
        vectorLifetimes.push_back(nCurrent);
    }

    for (int i = 0; i < nPipesCount; i++)
    {
        cout << vectorLifetimes[i] << " ";
    }

    cout << endl;

    return 0;
}
