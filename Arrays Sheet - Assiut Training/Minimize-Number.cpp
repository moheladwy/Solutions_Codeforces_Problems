#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, countOperations = 0;
    cin >> n;
    int numbers[n];

    bool canNotDoIt = false;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        if (numbers[i] % 2 != 0)
            canNotDoIt = true;
    }

    while (!canNotDoIt)
    {
        for (int i = 0; i < n; i++)
        {
            if (numbers[i] % 2 == 0)
                numbers[i] /= 2;
            else
                canNotDoIt = true;
        }
        if (!canNotDoIt)
            countOperations++;
    }
    cout << countOperations;
    return 0;
}