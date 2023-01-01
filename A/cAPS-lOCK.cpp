#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    cin >> word;
    bool ok = true;

    for (int i = 1; i < word.size(); i++)
    {
        if (word[i] >= 'a')
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] > 'Z')
                word[i] = toupper(word[i]);
            else if (word[i] <= 'a')
                word[i] = tolower(word[i]);
        }
    }

    cout << word;
    return 0;
}