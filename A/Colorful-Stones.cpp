#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, t;
    cin >> s;
    cin >> t;

    int position = 1;
    for (int i = 0, j = 0; i < t.size(); i++)
    {
        if (s[j] == t[i])
        {
            position++;
            j++;
        }
    }

    cout << position;
    return 0;
}