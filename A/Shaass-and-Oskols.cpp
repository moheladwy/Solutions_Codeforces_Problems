#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nWires, nShotedBirds;
    cin >> nWires;
    int nBirds[nWires];
    for (int i = 0; i < nWires; i++)
    {
        cin >> nBirds[i];
    }

    cin >> nShotedBirds;
    int sequance[nShotedBirds][2];
    for (int i = 0; i < nShotedBirds; i++)
    {
        cin >> sequance[i][0] >> sequance[i][1];

        if (sequance[i][1] == nBirds[sequance[i][0] - 1] && sequance[i][0] - 2 > -1)
        {
            nBirds[sequance[i][0] - 2] += sequance[i][1] - 1;
        }
        else if (sequance[i][1] == 1 && sequance[i][0] < nWires)
        {
            nBirds[sequance[i][0]] += nBirds[sequance[i][0] - 1] - 1;
        }
        else
        {
            if (sequance[i][0] < nWires)
            {
                nBirds[sequance[i][0]] += nBirds[sequance[i][0] - 1] - sequance[i][1];
            }
            if (sequance[i][0] - 2 > -1)
            {
                nBirds[sequance[i][0] - 2] += sequance[i][1] - 1;
            }
        }
        nBirds[sequance[i][0] - 1] = 0;
    }

    for (int i = 0; i < nWires; i++)
    {
        cout << nBirds[i] << endl;
    }
    return 0;
}