#include <iostream>
using namespace std;
int main()
{
    int numberOfProblems;
    int numberOfAgreeToProblem = 0;
    cin >> numberOfProblems;
    if (numberOfProblems == 1)
    {
        int status[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> status[i];
            if (status[i] == 1)
            {
                numberOfAgreeToProblem += 1;
            }
        }
        if (numberOfAgreeToProblem > 1)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    else
    {
        int status[numberOfProblems][3];
        int numberOfAcceptableProblems = 0;
        for (int i = 0; i < numberOfProblems; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> status[i][j];
                if (status[i][j] == 1)
                {
                    numberOfAgreeToProblem += 1;
                }
            }
            if (numberOfAgreeToProblem > 1)
            {
                numberOfAcceptableProblems += 1;
            }
            numberOfAgreeToProblem = 0;
        }
        cout << numberOfAcceptableProblems;
    }
    return 0;
}