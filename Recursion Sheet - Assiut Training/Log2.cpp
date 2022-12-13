#include <bits\stdc++.h>
using namespace std;

void sequence(long long n, long long counter = 0)
{
    if (n < 2)
    {
        cout << counter << endl;
        return;
    }
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