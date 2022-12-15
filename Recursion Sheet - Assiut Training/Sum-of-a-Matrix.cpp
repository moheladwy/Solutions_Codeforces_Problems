#include <bits\stdc++.h>
using namespace std;

#define ll long long

void sum_two_matrics(int arr1[], int arr2[], int reslut[], int size)
{
    if (!size)
        return;
    sum_two_matrics(arr1, arr2, reslut, size - 1);
    reslut[size - 1] = arr1[size - 1] + arr2[size - 1];
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int r, c;
    cin >> r >> c;

    int arr1[r * c], arr2[r * c], result[r * c];

    for (int i = 0; i < r * c; i++)
        cin >> arr1[i];

    for (int i = 0; i < r * c; i++)
        cin >> arr2[i];

    sum_two_matrics(arr1, arr2, result, r * c);

    for (int i = 0; i < r * c; i++)
    {
        cout << result[i] << ' ';
        if (i % c == c - 1)
            cout << '\n';
    }

    return 0;
}