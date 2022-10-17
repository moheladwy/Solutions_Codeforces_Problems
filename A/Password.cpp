#include <bits\stdc++.h>
using namespace std;

typedef set<int> setint;
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
        int n, num;
        cin >> n;
        setint allNumbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            allNumbers.erase(num);
        }
        cout << 6 * ((allNumbers.size() * (allNumbers.size() - 1)) / 2) << endl;
    }

    return 0;
}