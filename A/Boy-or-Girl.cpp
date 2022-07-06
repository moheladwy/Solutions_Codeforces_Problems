#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string userName;
    int numberOfDistinctCharacters = 0;
    cin >> userName;
    sort(userName.begin(), userName.end());
    for (int i = 0; i < userName.size(); i++)
    {
        if (userName[i] != userName[i + 1])
        {
            numberOfDistinctCharacters += 1;
        }
    }
    if (numberOfDistinctCharacters % 2 != 0)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}