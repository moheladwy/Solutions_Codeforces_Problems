#include <iostream>
using namespace std;
int main()
{
    int bananaPrice, nBananaWanted, ownedMoney, totalPrice = 0;
    cin >> bananaPrice >> ownedMoney >> nBananaWanted;
    for (int i = 1; i <= nBananaWanted; i++)
    {
        totalPrice += i * bananaPrice;
    }
    if (ownedMoney >= totalPrice)
    {
        cout << 0;
    }
    else if (ownedMoney < totalPrice)
    {
        cout << totalPrice - ownedMoney;
    }
    return 0;
}