#include <bits\stdc++.h>
using namespace std;

ostream &operator<<(ostream &out, const vector<vector<int>> &result)
{
    for (const vector<int> &row : result)
    {
        for (const int &index : row)
            out << index << ' ';
        out << '\n';
    }
    return out;
}

void sum_matrics(vector<vector<int>> &arr1, vector<vector<int>> &arr2, vector<vector<int>> &result, int r, int c)
{
    if (r < 0)
        return;
    sum_matrics(arr1, arr2, result, r - 1, c);
    if (c < 0)
        return;
    sum_matrics(arr1, arr2, result, r, c - 1);
    result[r][c] = arr1[r][c] + arr2[r][c];
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int r, c;
    cin >> r >> c;
    vector<vector<int>> arr1(r, vector<int>(c)), arr2(r, vector<int>(c)), result(r, vector<int>(c));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr1[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr2[i][j];

    sum_matrics(arr1, arr2, result, r - 1, c - 1);

    cout << result;

    return 0;
}