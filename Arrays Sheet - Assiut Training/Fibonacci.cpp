#include <bits\stdc++.h>
using namespace std;

int64_t calcFibonacci(int number)
{
    int64_t beforeLast = 0, last = 1, current;
    if (number == 1)
        return 0;
    else if (number == 2)
        return 1;
    else
    {
        for (int i = 3; i <= number; i++)
        {
            current = last + beforeLast;
            beforeLast = last;
            last = current;
        }
        return current;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int number;
    cin >> number;

    cout << calcFibonacci(number);
    return 0;
}