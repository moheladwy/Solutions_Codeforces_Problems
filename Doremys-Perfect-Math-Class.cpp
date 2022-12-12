#include <bits/stdc++.h>
using namespace std;

void solve(set<long long> &numbers)
{
    auto it1 = numbers.begin();
    for (; it1 != numbers.end(); it1++)
    {
        auto it2 = numbers.rbegin();

        for (; it2 != numbers.rend(); it2++)
            if (!numbers.count(*it2 - *it1))
                numbers.insert(*it2 - *it1);
    }
    cout << numbers.size() << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<long long> numbers;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            numbers.insert(tmp);
        }
        solve(numbers);
    }
    return 0;
}
