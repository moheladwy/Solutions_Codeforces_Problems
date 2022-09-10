#include <iostream>
using namespace std;

int64_t factorial(const int &number)
{
    int64_t fact = 1;
    for (int i = 1; i <= number; i++)
        fact *= i;
    return fact;
}

int main()
{
    int N;
    cin >> N;

    int numbers[N];
    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    for (int i = 0; i < N; i++)
    {
        if (numbers[i] == 0 || numbers[i] == 1)
            cout << 1 << endl;
        else
            cout << factorial(numbers[i]) << endl;
    }
    return 0;
}