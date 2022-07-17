#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nActions, untreatedCrimes = 0, nOfficers = 0;
    cin >> nActions;

    if (nActions == 1)
    {
        int action;
        cin >> action;

        if (action == -1)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
        return 0;
    }

    int actions[nActions];

    for (int i = 0; i < nActions; i++)
    {
        cin >> actions[i];

        if (nOfficers == 0 && actions[i] == -1)
        {
            untreatedCrimes++;
        }
        else if (actions[i] > -1)
        {
            nOfficers += actions[i];
        }
        else if (nOfficers != 0 && actions[i] == -1)
        {
            nOfficers--;
        }
    }

    cout << untreatedCrimes;
    return 0;
}