#include <bits\stdc++.h>
using namespace std;

long long summation(long long arr[], int size, int range)
{
    if (size < range)
        return 0;
    return arr[size] + summation(arr, size - 1, range);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int m, n;
    cin >> n >> m;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << summation(arr, n - 1, n - m);
    return 0;
}