#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum = 0;
    cin >> N;
    char digits[N];
    cin >> digits;

    for (int i = 0; i < N; i++)
        sum += digits[i] - '0';

    cout << sum;
    return 0;
}