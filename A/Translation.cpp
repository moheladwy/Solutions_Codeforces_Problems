#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    if (s.length() != t.length())
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[t.length() - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}