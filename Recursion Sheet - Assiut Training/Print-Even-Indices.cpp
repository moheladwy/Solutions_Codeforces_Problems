#include <bits\stdc++.h>
using namespace std;

void print_Recursion(long long arr[], int n)
{
    if (n < 0)
        return;
    if (!(n % 2))
        cout << arr[n] << ' ';
    print_Recursion(arr, n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    cin >> T;
    long long arr[T];
    for (int i = 0; i < T; i++)
        cin >> arr[i];
    print_Recursion(arr, T - 1);
    return 0;
}