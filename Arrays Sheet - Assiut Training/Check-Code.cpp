#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B;
    cin >> A >> B;

    string s;
    cin >> s;

    if (s[A] == '-')
    {
        for (int i = A + 1; i < s.length(); i++)
        {
            if (s[i] < '0' || s[i] > '9')
            {
                cout << "No";
                return 0;
            }
        }
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}