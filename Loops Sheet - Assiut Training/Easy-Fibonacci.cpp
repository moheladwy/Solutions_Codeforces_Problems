#include <iostream>
using namespace std;

/* linear solution */
int fib(const int &num, int &last, int &before)
{
    if (num == 1)
        return 0;
    else if (num == 2)
        return 1;
    else
    {
        int current = last + before;
        before = last;
        last = current;
        return current;
    }
}

/* recursion solution */
// int fib(const int &num)
// {
//     if (num == 1)
//         return 0;
//     else if (num == 2)
//         return 1;
//     else
//         return fib(num - 1) + fib(num - 2);
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, lastFib = 1, beforeLastFib = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
        cout << fib(i, lastFib, beforeLastFib) << " ";

    return 0;
}