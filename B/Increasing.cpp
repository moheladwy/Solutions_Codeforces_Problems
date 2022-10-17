#include <bits\stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef map<ull, int> mapullint;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        bool isIncreasing = true;
        mapullint arr;
        ull tmpNum;
        for (int i = 0; i < n; i++)
        {
            cin >> tmpNum;
            arr[tmpNum]++;
        }

        for (auto it : arr)
        {
            if (it.second > 1)
            {
                isIncreasing = false;
                break;
            }
        }
        if (isIncreasing)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}