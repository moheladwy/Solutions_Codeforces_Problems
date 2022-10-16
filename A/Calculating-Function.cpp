#include <bits\stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    ll number;
    cin >> number;

    if (number % 2 == 0)
        cout << number / 2;
    else
        cout << (-1 * number / 2) - 1;

    return 0;
}