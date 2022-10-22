#include <bits\stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int count = 0, nRBS = 0;
    string s;
    cin >> s;

    for (char &num : s)
    {
        if (num == '(')
            count++;
        else
            count--;
        if (count < 0)
        {
            nRBS++;
            count = 0;
        }
    }
    nRBS += count;
    cout << s.length() - nRBS << endl;
    return 0;
}