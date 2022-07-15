#include <iostream>
using namespace std;

int main()
{

    int size, nGroups = 1;
    cin >> size;
    string word[size];
    for (int i = 0; i < size; i++)
    {
        cin >> word[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (word[i] != word[i + 1])
        {
            nGroups++;
        }
    }
    cout << nGroups;
    return 0;
}