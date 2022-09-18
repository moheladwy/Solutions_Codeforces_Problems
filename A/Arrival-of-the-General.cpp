#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nSoldiers, smallestPosition = 0, tallestPosition = 0;
    cin >> nSoldiers;
    vector<int> hights(nSoldiers);

    for (int i = 0; i < nSoldiers; i++)
        cin >> hights[i];

    for (int position = 0; position < hights.size(); position++)
    {
        if (hights[position] <= hights[smallestPosition])
            smallestPosition = position;

        if (hights[position] > hights[tallestPosition])
            tallestPosition = position;
    }

    if (smallestPosition > tallestPosition)
        cout << (nSoldiers - 1 - smallestPosition) + tallestPosition;
    else
        cout << (nSoldiers - 1 - smallestPosition) + tallestPosition - 1;

    return 0;
}