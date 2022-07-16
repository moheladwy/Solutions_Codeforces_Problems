#include <iostream>
using namespace std;
int main()
{
    int nGames, dWins = 0, aWins = 0;
    string scores;
    cin >> nGames;
    cin >> scores;
    for (char letter : scores)
    {
        if (letter == 'D')
        {
            dWins++;
        }
        else
        {
            aWins++;
        }
    }
    if (dWins == aWins)
    {
        cout << "Friendship";
    }
    else if (dWins > aWins)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Anton";
    }
    return 0;
}