#include <iostream>
using namespace std;
int main()
{
    int numberOfInputs, X = 0;
    string inputOperator;
    cin >> numberOfInputs;
    for (int input = 0; input < numberOfInputs; input++)
    {
        cin >> inputOperator;
        if (inputOperator == "++X" || inputOperator == "X++")
        {
            ++X;
        }
        else if (inputOperator == "--X" || inputOperator == "X--")
        {
            --X;
        }
    }
    cout << X;
    return 0;
}