#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int numbers[N];

    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    for (int &number : numbers)
    {
        if (number > 0)
            number = 1;
        else if (number < 0)
            number = 2;
    }

    for (int &number : numbers)
        cout << number << " ";
    return 0;
}