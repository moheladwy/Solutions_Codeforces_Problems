#include <iostream>
using namespace std;

int sumDigits(const int &number)
{
    int sum = 0;
    string num = to_string(number);
    for (int i = 0; i < num.length(); i++)
    {
        sum += num[i] - '0';
    }
    return sum;
}

int main()
{
    int N, A, B, sum = 0;
    cin >> N >> A >> B;

    for (int i = 1; i <= N; i++)
        if (sumDigits(i) >= A && sumDigits(i) <= B)
            sum += i;
    cout << sum;
    return 0;
}