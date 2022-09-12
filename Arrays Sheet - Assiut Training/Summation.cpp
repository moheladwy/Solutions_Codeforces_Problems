#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int64_t N, sum = 0;
    cin >> N;
    int64_t numbers[N];
    for (int i = 0; i < N; i++)
        cin >> numbers[i];
    for (int i = 0; i < N; i++)
        sum += numbers[i];
    cout << abs(sum);
    return 0;
}