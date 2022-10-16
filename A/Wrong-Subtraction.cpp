#include <bits\stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    ll num, nSubtraction;
    cin >> num >> nSubtraction;

    for (int i = 0; i < nSubtraction; i++)
    {
        if (num % 10 == 0)
            num /= 10;
        else
            num--;
    }

    cout << num;
    return 0;
}