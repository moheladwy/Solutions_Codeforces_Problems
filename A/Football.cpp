#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nSamePlayers = 1;
    string s;
    cin >> s;

    // Special Test Case.
    if (s.size() <= 7)
    {
        cout << "NO";
        return 0;
    }

    // Normal Cases.
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            nSamePlayers++;
            if (nSamePlayers >= 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            nSamePlayers = 1;
        }
    }

    cout << "NO";
    return 0;
}