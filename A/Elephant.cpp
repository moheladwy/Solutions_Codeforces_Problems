#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int xPosition, nSteps = 0;
    cin >> xPosition;
    if (xPosition > 0 && xPosition < 6)
    {
        cout << 1;
        return 0;
    }
    while (xPosition > 0)
    {
        xPosition -= 5;
        nSteps++;
        if (xPosition > 0 && xPosition < 6)
        {
            nSteps++;
            break;
        }
    }
    cout << nSteps;
    return 0;
}