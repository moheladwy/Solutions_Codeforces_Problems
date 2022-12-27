#include <bits\stdc++.h>
using std::cin;
using std::cout;
using std::ios;
using std::sort;

bool isbigger(int &i, int &j)
{
    return (i > j);
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cout.tie(NULL);

    int t, sum1 = 0, sum2 = 0;
    cin >> t;
    if (t == 1)
    {
        cout << 1;
        return 0;
    }
    int arr[t];

    for (int i = 0; i < t; i++)
        cin >> arr[i];

    sort(arr, arr + t, isbigger);
    for (int i = 0; i < t - 1; i++)
        arr[i + 1] += arr[i];

    for (int i = 0; i < t; i++)
    {
        if (arr[i] > (arr[t - 1] - arr[i]))
        {
            cout << (i + 1);
            return 0;
        }
    }
    return 0;
}