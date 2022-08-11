#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int64_t color;
    set<int64_t> nShoes;
    for (int i = 0; i < 4; i++)
    {
        cin >> color;
        nShoes.insert(color);
    }

    cout << 4 - nShoes.size();
    return 0;
}