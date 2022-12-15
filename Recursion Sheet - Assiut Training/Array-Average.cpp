#include <bits\stdc++.h>
using namespace std;
#define foi                      \
    ios::sync_with_stdio(false); \
    cout.tie(NULL);              \
    cin.tie(NULL);

void calc_avg(long double arr[], int n, long double avg = 0, double counter = 0)
{
    if (!n)
    {
        cout << std::fixed << avg / counter;
        return;
    }
    calc_avg(arr, n - 1, avg + arr[n - 1], counter + 1);
}

int main()
{
    foi;
    int n;
    cin >> n;

    long double arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    calc_avg(arr, n);
    return 0;
}