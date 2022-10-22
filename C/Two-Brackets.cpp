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
        int countO = 0;
        string s;
        cin >> s;

        if (s.length() % 2)
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                countO++;
            else if (s[i] == '?' && countO < s.length() / 2)
            {
                s[i] = '(';
                countO++;
            }
            else if (s[i] == '?' && countO >= s.length() / 2)
                s[i] = ')';
        }
        cout << "countO: " << countO << endl;
        if (countO != s.length() / 2)
        {
            cout << "NO" << endl;
            continue;
        }

        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                count++;
            else if (s[i] == ')')
            {
                count--;
                if (count < 0)
                    break;
            }
        }
        cout << "count: " << count << endl;
        if (count)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}