#include <iostream>
using namespace std;

int main()
{
    int N, nSpaces;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        nSpaces = ((2 * N - 1) - (2 * i - 1)) / 2;
        for (int j = 0; j < nSpaces; j++)
            cout << " ";
        for (int l = 0; l < 2 * i - 1; l++)
            cout << "*";
        cout << endl;
    }

    for (int i = N; i >= 1; i--)
    {
        nSpaces = ((2 * N - 1) - (2 * i - 1)) / 2;
        for (int j = 0; j < nSpaces; j++)
            cout << " ";
        for (int l = 0; l < 2 * i - 1; l++)
            cout << "*";
        cout << endl;
    }

    return 0;
}