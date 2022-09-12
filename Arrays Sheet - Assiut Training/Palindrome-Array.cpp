#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int numbers[N];
    // int reversedNumbers[N];

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
        // reversedNumbers[N - i - 1] = numbers[i];
    }

    /* Takes 46ms and 400KB without using the reversedNumbers array in the solution. */
    for (int i = 0; i < N; i++)
    {
        if (numbers[i] != numbers[N - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }

    /* Takes 46ms and 800KB with using the reversedNumbers array in the solution. */
    // for (int i = 0; i < N; i++)
    // {
    //     if (numbers[i] != reversedNumbers[i])
    //     {
    //         cout << "NO";
    //         return 0;
    //     }
    // }
    cout << "YES";
    return 0;
}