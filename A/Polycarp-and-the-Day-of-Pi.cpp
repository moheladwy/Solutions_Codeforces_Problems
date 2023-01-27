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
    const string PI = "314159265358979323846264338327";

    while (t--)
    {
        string s, result("");
        cin >> s;
        for (int i = 0; i < min(30, int(s.length())); i++)
        {
            if (s[i] != PI[i])
                break;
            result.push_back(s[i]);
        }
        cout << result.size() << endl;
    }
    return 0;
}