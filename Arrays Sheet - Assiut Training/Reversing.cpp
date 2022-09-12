#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int numbers[N], reversedNumbers[N];

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
        reversedNumbers[N - i - 1] = numbers[i];
    }

    for (int &number : reversedNumbers)
        cout << number << " ";
    return 0;
}