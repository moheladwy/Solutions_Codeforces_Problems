#include <bits\stdc++.h>
using namespace std;

typedef vector<int> vint;
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
        cout << 1 << ' ' << n << ' ';
        for (int i = 2; i < n; i++)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}