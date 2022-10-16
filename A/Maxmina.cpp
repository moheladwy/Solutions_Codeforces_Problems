#include <bits\stdc++.h>
using namespace std;

typedef vector<int> vint;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int t, k, n;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        bool isHavingOne = false;
        cin >> n >> k;
        vint numbers(n);
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
            if (numbers[i])
                isHavingOne = true;
        }

        if (!isHavingOne)
            cout << "No" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}