#include <bits\stdc++.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cout.tie(NULL);

    int sizeWord = 0;
    string s, hello = "hello", result = "";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == hello[sizeWord])
        {
            result += s[i];
            sizeWord++;
        }
    }
    if (result == hello)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}