#include <iostream>
using namespace std;

/* The hole algorithm takes 15ms time and 0KB memory.*/
void BubbleSort(int numbers[], const int &length)
{
    int counter = -1;
    while (counter != 0)
    {
        counter = 0;
        for (int i = 0; i < length - 1; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
                counter++;
            }
        }
    }
}

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

    BubbleSort(numbers, N);
    for (int &number : numbers)
        cout << number << " ";
    return 0;
}