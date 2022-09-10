#include <iostream>
using namespace std;

int main()
{
    int N, Number, Positive = 0, Negative = 0, Even = 0, Odd = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> Number;

        if (Number % 2 == 0)
            Even++;
        else
            Odd++;

        if (Number != 0)
        {
            if (Number > 0)
                Positive++;
            else
                Negative++;
        }
    }

    cout << "Even: " << Even << endl;
    cout << "Odd: " << Odd << endl;
    cout << "Positive: " << Positive << endl;
    cout << "Negative: " << Negative << endl;
    return 0;
}