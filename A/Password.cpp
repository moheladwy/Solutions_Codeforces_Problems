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
        int n, num;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> num;
        cout << 6 * (((10 - n) * (9 - n)) / 2) << endl;
    }

    return 0;
}