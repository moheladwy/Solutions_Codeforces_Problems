#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string letters;
    getline(cin, letters);

    if (letters == "{}")
    {
        cout << 0;
        return 0;
    }

    set<char> existingLetters;
    for (auto letter : letters)
    {
        if (isalpha(letter))
        {
            existingLetters.insert(letter);
        }
    }

    cout << existingLetters.size();
    return 0;
}