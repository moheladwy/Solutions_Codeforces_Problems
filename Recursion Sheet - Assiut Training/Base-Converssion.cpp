#include <bits\stdc++.h>
using namespace std;

void print_Recursion(long long n)
{
    if (!n)
        return;
    print_Recursion(n / 2);
    cout << n % 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        if (n != 0)
            print_Recursion(n);
        else
            cout << 0;
        cout << '\n';
    }

    return 0;
}