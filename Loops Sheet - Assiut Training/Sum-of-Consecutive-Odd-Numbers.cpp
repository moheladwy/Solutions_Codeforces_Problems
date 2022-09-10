#include <iostream>
using namespace std;

int main()
{
    int N, num1, num2, sum = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num1 >> num2;
        if (num1 == num2 || abs(num1 - num2) == 1)
            cout << 0 << endl;
        else if (num1 > num2)
        {
            for (int i = num2 + 1; i < num1; i++)
                if (i % 2 != 0)
                    sum += i;
            cout << sum << endl;
        }
        else
        {
            for (int i = num1 + 1; i < num2; i++)
                if (i % 2 != 0)
                    sum += i;
            cout << sum << endl;
        }
        sum = 0;
    }
    return 0;
}