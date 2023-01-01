#include <bits\stdc++.h>
using namespace std;

void solve(int &n)
{
    int tmpVar, nTaxies = 0, groups[5] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> tmpVar;
        groups[tmpVar]++;
    }
    nTaxies += groups[4];

    int minTreeOne = min(groups[3], groups[1]);
    nTaxies += minTreeOne;
    groups[3] -= minTreeOne;
    groups[1] -= minTreeOne;
    nTaxies += groups[3];

    nTaxies += (groups[2] / 2);
    groups[2] = (groups[2] % 2);
    if (groups[2])
    {
        nTaxies++;
        groups[1] -= 2;
        if (groups[1] < 0)
            groups[1] = 0;
    }
    nTaxies += ((groups[1] + 3) / 4);

    cout << nTaxies;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    solve(n);
    return 0;
}