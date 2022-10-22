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
        int countQ = 0;
        string s, tmp;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '?')
                countQ++;
            else
                tmp += s[i];
        }
        if ((tmp == "()" && countQ % 2 == 0) || (tmp == ")(" && s[0] == '?' && s[s.length() - 1] == '?' && countQ % 2 == 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}