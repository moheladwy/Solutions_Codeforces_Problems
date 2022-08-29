#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string firstName, secondName, letters;
    cin >> firstName >> secondName >> letters;

    firstName += secondName;
    if (letters.size() != firstName.size())
    {
        cout << "NO";
        return 0;
    }

    sort(firstName.begin(), firstName.end());
    sort(letters.begin(), letters.end());

    for (int i = 0; i < letters.size(); i++)
    {
        if (letters[i] != firstName[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}