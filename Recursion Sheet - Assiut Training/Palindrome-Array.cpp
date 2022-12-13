#include <bits\stdc++.h>
using namespace std;

void isPalindrome(long long arr[], int &n, int counter = 0)
{
    if (counter == n / 2)
    {
        cout << "YES";
        return;
    }

    if (arr[counter] == arr[n - counter - 1])
        isPalindrome(arr, n, counter + 1);
    else
    {
        cout << "NO";
        return;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "YES";
        return 0;
    }
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    isPalindrome(arr, n);
    return 0;
}