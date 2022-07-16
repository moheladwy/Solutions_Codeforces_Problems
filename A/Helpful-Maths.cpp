#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << s;
        return 0;
    }
    else if (s.size() == 3)
    {
        if (s[0] > s[2])
        {
            swap(s[0], s[2]);
        }
        cout << s;
        return 0;
    }
    int nSwap = -1;
    while (nSwap != 0)
    {
        nSwap = 0;
        for (int i = 0; i < s.size() - 2; i += 2)
        {
            if (s[i] > s[i + 2])
            {
                swap(s[i], s[i + 2]);
                nSwap++;
            }
        }
    }
    cout << s;
    return 0;
}