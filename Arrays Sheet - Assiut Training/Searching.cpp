#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, X;
    cin >> N;
    int numbers[N];
    for (int i = 0; i < N; i++)
        cin >> numbers[i];
    cin >> X;

    for (int i = 0; i < N; i++)
    {
        if (numbers[i] == X)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}