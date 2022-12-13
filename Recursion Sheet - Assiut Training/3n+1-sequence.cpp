#include <bits\stdc++.h>
using namespace std;

void sequence(long long n, long long counter = 0)
{
    if (n < 3)
    {
        cout << counter + n << endl;
        return;
    }
    if (n % 2)
        sequence(3 * n + 1, counter + 1);
    else
        sequence(n / 2, counter + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    long long n;
    cin >> n;
    sequence(n);

    return 0;
}