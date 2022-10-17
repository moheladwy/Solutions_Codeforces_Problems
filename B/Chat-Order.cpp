#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    stack<string> exist;
    unordered_map<string, bool> isPrinted;

    int n;
    cin >> n;

    string name;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        exist.push(name);
    }

    for (int i = n - 1; i > -1; i--)
    {
        if (!isPrinted[exist.top()])
        {
            cout << exist.top() << endl;
            isPrinted[exist.top()] = true;
        }
        exist.pop();
    }
    return 0;
}