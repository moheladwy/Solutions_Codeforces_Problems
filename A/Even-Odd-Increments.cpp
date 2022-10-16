#include <bits\stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int nCases = 0; nCases < t; nCases++)
    {
        int n, q, odd = 0, even = 0;
        ull originalSum = 0;
        cin >> n >> q;

        for (int elem = 0; elem < n; elem++)
        {
            ull num;
            cin >> num;
            (num % 2 == 0) ? even++ : odd++;
            originalSum += num;
        }
        for (int par = 0; par < q; par++)
        {
            int operation;
            ull num;
            cin >> operation >> num;
            if (!operation)
            {
                originalSum += (even * num);
                if (num % 2 != 0)
                {
                    even = 0;
                    odd = n;
                }
            }
            else
            {
                originalSum += (odd * num);
                if (num % 2 != 0)
                {
                    even = n;
                    odd = 0;
                }
            }
            cout << originalSum << endl;
        }
    }

    return 0;
}