#include <bits\stdc++.h>
using namespace std;

long long summation(long long arr[], int size)
{
    if (size < 0)
        return 0;
    return arr[size] + summation(arr, size - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << summation(arr, n - 1);
    return 0;
}