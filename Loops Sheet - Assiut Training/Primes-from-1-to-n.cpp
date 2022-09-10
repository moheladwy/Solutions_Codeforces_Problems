#include <iostream>
using namespace std;

int prime(const int &number)
{
    if (number == 2)
        return true;

    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;

    return true;
}

int main()
{
    int N;
    cin >> N;

    if (N < 2)
    {
        return 0;
    }
    for (int i = 2; i <= N; i++)
        if (prime(i))
            cout << i << " ";

    return 0;
}