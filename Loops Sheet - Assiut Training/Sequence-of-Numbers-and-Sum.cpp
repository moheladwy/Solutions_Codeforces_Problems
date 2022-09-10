#include <iostream>
using namespace std;

void printsequence(const int &smallest, const int &biggest)
{
    int sum = 0;
    for (int i = smallest; i <= biggest; i++)
    {
        cout << i << " ";
        sum += i;
    }
    cout << "sum =" << sum << endl;
}

int main()
{
    int num1 = 1, num2 = 1;
    while (num1 > 0 && num2 > 0)
    {
        cin >> num1 >> num2;
        if (num1 > 0 && num2 > 0)
        {
            if (num1 >= num2)
                printsequence(num2, num1);
            else
                printsequence(num1, num2);
        }
    }

    return 0;
}