#include <iostream>
using namespace std;

bool luckyNum(const int &num)
{
    string number = to_string(num);
    for (int i = 0; i < number.length(); i++)
        if (number[i] != '4' && number[i] != '7')
            return false;
    return true;
}

int main()
{
    int A, B, noLucky = 0;
    cin >> A >> B;

    for (int i = A; i <= B; i++)
    {
        if (luckyNum(i))
            cout << i << " ";
        else
            noLucky++;
    }
    if (noLucky == B - A + 1)
        cout << -1;

    return 0;
}