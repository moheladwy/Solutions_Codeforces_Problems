#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    for (char &letter : str)
        letter = tolower(letter);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 'a' && str[i] != 'o' && str[i] != 'y' && str[i] != 'e' && str[i] != 'u' && str[i] != 'i')
        {
            cout << ".";
            cout << str[i];
        }
    }
    return 0;
}