#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, numbers[3], sumNumbers[3] = {0};
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[0] >> numbers[1] >> numbers[2];
        sumNumbers[0] += numbers[0];
        sumNumbers[1] += numbers[1];
        sumNumbers[2] += numbers[2];
    }

    if (sumNumbers[0] == 0 && sumNumbers[1] == 0 && sumNumbers[2] == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}