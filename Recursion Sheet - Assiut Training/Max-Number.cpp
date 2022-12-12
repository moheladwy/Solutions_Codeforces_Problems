#include <bits\stdc++.h>
using namespace std;

void max_value(long long arr[], long long &max_number, int size_arr)
{
    if (!size_arr)
        return;
    max_value(arr, max_number, size_arr - 1);
    max_number = (max_number < arr[size_arr]) ? arr[size_arr] : max_number;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long arr[n], max_number;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    max_number = arr[0];
    max_value(arr, max_number, n - 1);
    cout << max_number;
    return 0;
}