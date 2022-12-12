#include <bits\stdc++.h>
using namespace std;

long long factorial(long long n)
{
    if (!n)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    long long n;
    cin >> n;
    cout << factorial(n);
    return 0;
}