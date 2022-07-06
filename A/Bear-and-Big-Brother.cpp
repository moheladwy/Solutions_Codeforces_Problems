#include <iostream>
using namespace std;
int main()
{
    int limakWeight, bobWeight, yearsNeeded = 0;
    cin >> limakWeight >> bobWeight;
    while (limakWeight <= bobWeight)
    {
        limakWeight *= 3;
        bobWeight *= 2;
        yearsNeeded++;
    }
    cout << yearsNeeded;
    return 0;
}