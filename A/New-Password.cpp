#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nLetters, nDistinctLetters;
    cin >> nLetters >> nDistinctLetters;
    vector<char> newPassword;

    if (nLetters == 2 && nDistinctLetters == 2)
    {
        cout << "by";
        return 0;
    }

    while (newPassword.size() < nLetters)
    {
        for (char letter = 'a'; letter < 'a' + nDistinctLetters; letter++)
        {
            newPassword.push_back(letter);
            if (newPassword.size() == nLetters)
            {
                break;
            }
        }
    }

    for (auto letter : newPassword)
    {
        cout << letter;
    }

    return 0;
}