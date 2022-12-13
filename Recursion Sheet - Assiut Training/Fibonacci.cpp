#include <bits\stdc++.h>
using namespace std;

int Log2(int n)
{
    if (n < 3)
        return n - 1;
    return Log2(n - 1) + Log2(n - 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << Log2(n);

    return 0;
}