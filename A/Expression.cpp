#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, results[6], biggestResult;
    cin >> a >> b >> c;

    results[0] = a * b * c;
    results[1] = a + b + c;
    results[2] = (a * b) + c;
    results[3] = (a + b) * c;
    results[4] = a + (b * c);
    results[5] = a * (b + c);

    biggestResult = results[0];
    for (int i = 1; i < 6; i++)
    {
        if (results[i] > biggestResult)
            biggestResult = results[i];
    }

    cout << biggestResult;
    return 0;
}