#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nTeams, changeColors = 0;
    cin >> nTeams;

    int teamsColors[nTeams][2];
    for (int i = 0; i < nTeams; i++)
    {
        cin >> teamsColors[i][0] >> teamsColors[i][1];
    }

    for (int i = 0; i < nTeams - 1; i++)
    {
        for (int j = i + 1; j < nTeams; j++)
        {
            if (teamsColors[i][0] == teamsColors[j][1])
            {
                changeColors++;
            }
            if (teamsColors[j][0] == teamsColors[i][1])
            {
                changeColors++;
            }
        }
    }

    cout << changeColors;
    return 0;
}
