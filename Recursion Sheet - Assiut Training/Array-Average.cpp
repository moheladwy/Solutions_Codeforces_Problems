#include <bits\stdc++.h>
#include <iomanip>
using namespace std;

void calc_avg(long double arr[], int n, long double avg = 0, int counter = 0)
{
    if (n < 0)
    {
        cout << std::setprecision(6) << avg / counter;
        return;
    }

    calc_avg(arr, n - 1, avg + arr[n], counter + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    long double arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    calc_avg(arr, n - 1);

    return 0;
}