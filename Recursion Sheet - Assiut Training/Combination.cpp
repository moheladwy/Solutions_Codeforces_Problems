#include <bits\stdc++.h>
using namespace std;
#define foi                      \
    ios::sync_with_stdio(false); \
    cout.tie(NULL);              \
    cin.tie(NULL);

long long fact(int num)
{
    if (!num)
        return 1;
    return num * fact(num - 1);
}

long long combination(int N, int R)
{
    return fact(N) / (fact(R) * fact(abs(N - R)));
}

int main()
{
    foi;
    int N, R;
    cin >> N >> R;
    cout << combination(N, R);
    return 0;
}