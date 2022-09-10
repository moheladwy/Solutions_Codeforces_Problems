#include <iostream>
using namespace std;

int main()
{
    int N, number, Max;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        if (i == 0)
            Max = number;

        if (Max <= number)
            Max = number;
    }
    cout << Max;
    return 0;
}