#include <bits\stdc++.h>
using namespace std;

bool isLuckyNumber(string number)
{
    for (char &n : number)
        if (n != '7' && n != '4')
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string n;
    cin >> n;
    int nLuckyNumbers = 0;

    for (int i = 0; i < n.length(); i++)
        if (n[i] == '7' || n[i] == '4')
            nLuckyNumbers++;

    if (isLuckyNumber(to_string(nLuckyNumbers)))
    {
        cout << "YES";
        return 0;
    }

    cout << "NO";
    return 0;
}