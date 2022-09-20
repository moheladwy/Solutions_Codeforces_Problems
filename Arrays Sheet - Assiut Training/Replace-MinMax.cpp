#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, smallestNum = 0, biggestNum = 0;
    cin >> N;

    int numbers[N];
    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    for (int i = 1; i < N; i++)
    {
        if (numbers[smallestNum] > numbers[i])
            smallestNum = i;
        if (numbers[biggestNum] < numbers[i])
            biggestNum = i;
    }
    swap(numbers[smallestNum], numbers[biggestNum]);

    for (int number : numbers)
        cout << number << " ";
    return 0;
}