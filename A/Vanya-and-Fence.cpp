#include <iostream>
using namespace std;
int main()
{
    int nFriends, maxHight, maxWidth = 0;
    cin >> nFriends >> maxHight;
    int hArray[nFriends];
    for (int i = 0; i < nFriends; i++)
    {
        cin >> hArray[i];
    }
    for (int hight : hArray)
    {
        if (hight > maxHight)
        {
            maxWidth += 2;
        }
        else
        {
            maxWidth++;
        }
    }
    cout << maxWidth;
    return 0;
}