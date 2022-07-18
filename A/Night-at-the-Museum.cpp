#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    char temp = 'a';
    int sum = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int val2 = temp - s[i] + 26;
        if (val2 > 25)
        {
            val2 = abs('a' - s[i]) + ('z' - temp + 1);
        }
        sum += min(abs(s[i] - temp), val2);
        temp = s[i];
    }
    cout << sum;
    return 0;
}

// #include <iostream>
// using namespace std;

// void makeTurn(char letters[26], char currentLetter);
// int searchLetter(char letters[26], char letter);

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     char letters[26];
//     int letterPosition, nMoves = 0;
//     string name;
//     makeTurn(letters, 'a');

//     cin >> name;

//     for (int i = 0; i < name.size(); i++)
//     {
//         letterPosition = searchLetter(letters, name[i]);
//         if (letterPosition <= 13)
//         {
//             nMoves += letterPosition;
//             makeTurn(letters, name[i]);
//         }
//         else if (letterPosition > 13)
//         {
//             nMoves += (26 - letterPosition);
//             makeTurn(letters, name[i]);
//         }
//     }

//     cout << nMoves;
//     return 0;
// }

// void makeTurn(char letters[26], char currentLetter)
// {
//     char letter;
//     if (int(currentLetter) > 97 && int(currentLetter) <= 122)
//     {

//         for (int i = 0, counter = 0; i < 26; i++)
//         {
//             letter = char(int(currentLetter) + counter);
//             counter++;
//             letters[i] = letter;
//             if (int(letter) == 122)
//             {
//                 currentLetter = 'a';
//                 counter = 0;
//             }
//         }
//     }
//     else if (int(currentLetter) == 97)
//     {
//         for (int i = 0; i < 26; i++)
//         {
//             letter = 97 + i;
//             letters[i] = letter;
//         }
//     }
// }

// int searchLetter(char letters[26], char letter)
// {
//     int i;
//     for (i = 0; i < 26; i++)
//     {
//         if (letter == letters[i])
//         {
//             break;
//         }
//     }
//     return i;
// }