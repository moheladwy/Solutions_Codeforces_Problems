#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, counter = 1;
    cin >> N;

    int numbers[N];

    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    int smallestNumber = numbers[0];
    for (int i = 1; i < N; i++)
    {
        if (smallestNumber == numbers[i])
            counter++;
        else if (smallestNumber > numbers[i])
        {
            smallestNumber = numbers[i];
            counter = 1;
        }
    }

    if (counter % 2 != 0)
        cout << "Lucky";
    else
        cout << "Unlucky";
    return 0;
}