#include <iostream>
using namespace std;

bool prime(const int &number)
{
    if (number < 2)
        return false;
    else if (number == 2)
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
    if (prime(N))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}