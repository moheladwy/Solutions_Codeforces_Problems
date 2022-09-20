#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int firstArr[n], secondArr[n];
    for (int i = 0; i < n; i++)
        cin >> firstArr[i];
    for (int i = 0; i < n; i++)
        cin >> secondArr[i];

    sort(firstArr, firstArr + n);
    sort(secondArr, secondArr + n);

    for (int i = 0; i < n; i++)
    {
        if (firstArr[i] != secondArr[i])
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}