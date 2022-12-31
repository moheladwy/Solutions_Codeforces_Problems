#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        priority_queue<int, vector<int>, greater<>> pr;
        long long tmp, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            pr.push(tmp);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> tmp;
            pr.pop();
            pr.push(tmp);
        }
        for (int i = 0; i < n; i++)
        {
            sum += pr.top();
            pr.pop();
        }
        cout << sum << '\n';
    }

    return 0;
}