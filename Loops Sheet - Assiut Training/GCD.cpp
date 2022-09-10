#include <iostream>
using namespace std;

int main()
{
    int num1, num2, biggestNum, mostCommon;
    cin >> num1 >> num2;
    if (num1 == 1 || num2 == 1)
    {
        cout << 1;
        return 0;
    }

    if (num1 >= num2)
        biggestNum = num1;
    else
        biggestNum = num2;

    for (int i = 1; i <= biggestNum; i++)
        if (num1 % i == 0 && num2 % i == 0)
            mostCommon = i;

    cout << mostCommon;
    return 0;
}