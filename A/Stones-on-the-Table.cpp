#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nStones, nDeletedStones = 0;
    string s;
    cin >> nStones;
    cin >> s;
    // Special test cases.
    if ((nStones == 1) || (nStones == 2 && s[0] != s[1]))
    {
        cout << 0;
        return 0;
    }
    else if (nStones == 2 && s[0] == s[1])
    {
        cout << 1;
        return 0;
    }

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(s.begin() + i + 1);
            nDeletedStones++;
            i--;
        }
    }
    cout << nDeletedStones;
    return 0;
}