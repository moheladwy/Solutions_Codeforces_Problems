#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nCards, card, sumNumberSereja = 0, sumNumberDima = 0, girlsTurn = 0;
    cin >> nCards;
    vector<int> cardsArray;
    for (int i = 0; i < nCards; i++)
    {
        cin >> card;
        cardsArray.push_back(card);
    }
    while (!cardsArray.empty())
    {
        if (girlsTurn % 2 == 0)
        {

            if (cardsArray[0] > cardsArray[cardsArray.size() - 1])
            {
                sumNumberSereja += cardsArray[0];
                cardsArray.erase(cardsArray.begin());
            }
            else if (cardsArray[0] <= cardsArray[cardsArray.size() - 1])
            {
                sumNumberSereja += cardsArray[cardsArray.size() - 1];
                cardsArray.erase(cardsArray.end() - 1);
            }
        }
        else
        {
            if (cardsArray[0] > cardsArray[cardsArray.size() - 1])
            {
                sumNumberDima += cardsArray[0];
                cardsArray.erase(cardsArray.begin());
            }
            else if (cardsArray[0] <= cardsArray[cardsArray.size() - 1])
            {
                sumNumberDima += cardsArray[cardsArray.size() - 1];
                cardsArray.erase(cardsArray.end() - 1);
            }
        }
        girlsTurn++;
    }
    cout << sumNumberSereja << " " << sumNumberDima;
    return 0;
}