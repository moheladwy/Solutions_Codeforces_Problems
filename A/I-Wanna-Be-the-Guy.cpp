#include <bits/stdc++.h>
using namespace std;

/* this solution got 0ms and 0KB */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nLevels, p, q, temp;
    cin >> nLevels;
    vector<int> Levels(nLevels, false);

    cin >> p;
    if (p != 0)
    {
        for (int i = 0; i < p; i++)
        {
            cin >> temp;
            Levels[temp - 1] = true;
        }
    }
    cin >> q;
    if (q != 0)
    {
        for (int i = 0; i < q; i++)
        {
            cin >> temp;
            Levels[temp - 1] = true;
        }
    }
    for (bool level : Levels)
    {
        if (!level)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";
    return 0;
}

/* this solution got 15ms and 100KB */
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int nLevels, p, q;
//     unordered_set<int> Levels;
//     cin >> nLevels;

//     cin >> p;
//     if (p != 0)
//     {
//         int temp;
//         for (int i = 0; i < p; i++)
//         {
//             cin >> temp;
//             Levels.insert(temp);
//         }
//     }
//     cin >> q;
//     if (q != 0)
//     {
//         int temp;
//         for (int i = 0; i < q; i++)
//         {
//             cin >> temp;
//             Levels.insert(temp);
//         }
//     }
//     if (Levels.size() != nLevels)
//     {
//         cout << "Oh, my keyboard!";
//         return 0;
//     }

//     cout << "I become the guy.";
//     return 0;
// }