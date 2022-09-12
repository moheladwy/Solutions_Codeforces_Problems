#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, lowest[2];
    cin >> N;
    int numbers[N];

    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    lowest[0] = numbers[0];
    lowest[1] = 0;
    for (int i = 1; i < N; i++)
    {
        if (numbers[i] < lowest[0])
        {
            lowest[0] = numbers[i];
            lowest[1] = i;
        }
    }
    cout << lowest[0] << " " << lowest[1] + 1;
    return 0;
}