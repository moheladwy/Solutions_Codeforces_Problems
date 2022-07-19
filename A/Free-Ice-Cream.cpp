#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int64_t nPeople, currentIceCream, distressKids = 0;
    cin >> nPeople >> currentIceCream;
    char sign[nPeople];
    int numbers[nPeople];

    for (int i = 0; i < nPeople; i++)
    {
        cin >> sign[i] >> numbers[i];
        if (sign[i] == '+')
        {
            currentIceCream += numbers[i];
        }
        else if (sign[i] == '-' && currentIceCream >= numbers[i])
        {
            currentIceCream -= numbers[i];
        }
        else if (sign[i] == '-' && currentIceCream < numbers[i])
        {
            distressKids++;
        }
    }

    cout << currentIceCream << " " << distressKids;
    return 0;
}
