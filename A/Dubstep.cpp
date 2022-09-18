#include <bits/stdc++.h>
using namespace std;

/*
Input
The input consists of a single non-empty string, consisting only of uppercase English letters,
the string's length doesn't exceed 200 characters. It is guaranteed that before Vasya remixed the song,
no word contained substring "WUB" in it; Vasya didn't change the word order.
It is also guaranteed that initially the song had at least one word.

Output
Print the words of the initial song that Vasya used to make a dubsteb remix. Separate the words with a space.
*/

string removeSpaces(string line)
{
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ')
        {
            line.erase(line.begin(), line.begin() + 1);
            i--;
        }
        else
            break;
    }

    for (int i = line.length() - 1; i >= 0; i--)
    {
        if (line[i] == ' ')
            line.erase(line.begin() + i, line.begin() + i + 1);
        else
            break;
    }
    return line;
}

string findWUB(string line)
{
    for (int letter = 0; letter < line.length(); letter++)
    {
        if (line[letter] == 'W' && line[letter + 1] == 'U' && line[letter + 2] == 'B')
        {
            line[letter] = ' ';
            line.erase(line.begin() + letter + 1, line.begin() + letter + 3);
        }
    }

    return line;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line, songName = "";
    cin >> line;

    cout << removeSpaces(findWUB(line));
    return 0;
}