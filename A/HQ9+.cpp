#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string s;
    cin >> s;

    for (char &letter : s)
    {
        if (letter == 'H' || letter == 'Q' || letter == '9')
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}