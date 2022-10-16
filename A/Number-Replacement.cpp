#include <bits\stdc++.h>
using namespace std;

typedef vector<char> vchar;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int t, n;
    string str;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int arr[n];
        vchar arrChars(n);
        for (int j = 0; j < n; j++)
            cin >> arr[j];
        cin >> str;
        for (int j = 0; j < n; j++)
        {
            char tmp = str[j];
            int tmpNum = arr[j];
            for (int m = 0; m < n; m++)
            {
                if (arr[m] == tmpNum)
                    arrChars[m] = tmp;
            }
        }
        string str2 = "";
        for (char &letter : arrChars)
            str2 += letter;
        if (str == str2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}