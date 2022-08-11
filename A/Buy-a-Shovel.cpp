#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int shovelPrice, differentCoin;
    cin >> shovelPrice >> differentCoin;

    if (shovelPrice % 10 == 0 || shovelPrice % 10 == differentCoin)
    {
        cout << 1;
        return 0;
    }

    int originalPrice = shovelPrice, nShovels = 1;
    while (shovelPrice % 10 != 0 && shovelPrice % 10 != differentCoin)
    {
        shovelPrice += originalPrice;
        nShovels++;
    }

    cout << nShovels;
    return 0;
}