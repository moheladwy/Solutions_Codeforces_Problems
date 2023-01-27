#include <bits\stdc++.h>
using namespace std;

#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int numbers[n][n - 1];
        vector<int> firsts(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
                cin >> numbers[i][j];
            firsts[i] = numbers[i][0];
        }
        sort(firsts.begin(), firsts.end());
        if (firsts[0] == firsts[1])
        {
            cout << firsts[0] << ' ';
            for (int i = 0; i < n; i++)
            {
                if (firsts[n - 1] == numbers[i][0])
                {
                    for (int j = 0; j < n - 1; j++)
                        cout << numbers[i][j] << ' ';
                    cout << endl;
                    break;
                }
            }
        }
        else
        {
            cout << firsts[1] << ' ';
            for (int i = 0; i < n; i++)
            {
                if (firsts[0] == numbers[i][0])
                {
                    for (int j = 0; j < n - 1; j++)
                        cout << numbers[i][j] << ' ';
                    cout << endl;
                    break;
                }
            }
        }
    }
    return 0;
}