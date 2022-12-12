#include <bits\stdc++.h>
using namespace std;

void print_Recursion(int n)
{
    if (n == 1)
    {
        cout << n;
        return;
    }
    cout << n << ' ';
    print_Recursion(n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    cin >> T;
    print_Recursion(T);

    return 0;
}