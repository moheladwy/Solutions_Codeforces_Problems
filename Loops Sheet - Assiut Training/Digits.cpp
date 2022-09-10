#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string numbers[N];
    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    for (int i = 0; i < N; i++)
    {
        for (int j = numbers[i].length() - 1; j >= 0; j--)
            cout << numbers[i][j] << " ";
        cout << endl;
    }

    return 0;
}