#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, b, d, nWastedJuice = 0, sumSize = 0;
    cin >> n >> b >> d;

    int orangesSizes[n];
    for (int i = 0; i < n; i++)
    {
        cin >> orangesSizes[i];
        if (orangesSizes[i] <= b)
        {
            sumSize += orangesSizes[i];
            if (sumSize > d)
            {
                nWastedJuice++;
                sumSize = 0;
            }
        }
    }

    cout << nWastedJuice;
    return 0;
}