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

    for (int i = 0; i < N; i++)
        if (numbers[i] <= 10)
            cout << "A[" << i << "] = " << numbers[i] << endl;

    return 0;
}