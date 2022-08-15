#include <bits/stdc++.h>
using namespace std;

/*
The only line contains four integers n, t, k, d (1 ≤ n, t, k, d ≤ 1000)
n -> the number of cakes needed.
t -> the time needed for one oven to bake k cakes.
k -> the number of cakes baked at the same time.
d -> the time needed to build the second oven.
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t, k, d;
    cin >> n >> t >> k >> d;

    double tForOneOven = ceil((double(n) / double(k))) * t;
    if (tForOneOven > t + d)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}