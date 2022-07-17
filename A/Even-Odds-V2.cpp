// This code works perfectly.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int64_t nNumbers, position;
    cin >> nNumbers >> position;

    if (nNumbers % 2 == 0)
    {
        if (position <= nNumbers / 2)
        {
            cout << 2 * position - 1;
        }
        else if (position > nNumbers / 2)
        {
            cout << 2 * position - nNumbers;
        }
    }
    else
    {
        if (position <= ((nNumbers / 2) + 1))
        {
            cout << 2 * position - 1;
        }
        else if (position > ((nNumbers / 2) + 1))
        {
            cout << (2 * position) - (nNumbers + 1);
        }
    }

    return 0;
}