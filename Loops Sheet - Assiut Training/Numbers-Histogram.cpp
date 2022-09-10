#include <iostream>
using namespace std;

int main()
{
    char sympol;
    int N;
    cin >> sympol;
    cin >> N;
    int numbers[N];
    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < numbers[i]; j++)
            cout << sympol;
        cout << endl;
    }

    return 0;
}