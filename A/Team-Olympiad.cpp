#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nStudents, nTeams;
    cin >> nStudents;
    int allSkills[nStudents];
    vector<vector<int>> skills(3);

    for (int i = 0; i < nStudents; i++)
    {
        cin >> allSkills[i];
    }

    for (int i = 0; i < nStudents; i++)
    {
        if (allSkills[i] == 1)
        {
            skills[0].push_back(i + 1);
        }
        else if (allSkills[i] == 2)
        {
            skills[1].push_back(i + 1);
        }
        else
        {
            skills[2].push_back(i + 1);
        }
    }

    if (skills[0].size() == 0 || skills[1].size() == 0 || skills[2].size() == 0)
    {
        cout << 0;
        return 0;
    }

    nTeams = min(min(skills[0].size(), skills[1].size()), skills[2].size());

    cout << nTeams << endl;

    for (int team = 0; team < nTeams; team++)
    {
        cout << skills[0][team] << " " << skills[1][team] << " " << skills[2][team] << endl;
    }

    return 0;
}