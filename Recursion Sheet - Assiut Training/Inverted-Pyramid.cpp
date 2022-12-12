#include <bits\stdc++.h>
using namespace std;

void print_Recursion(int nSpaces, int nStars)
{
    if (nSpaces < 0)
        return;
    print_Recursion(nSpaces - 1, nStars + 2);
    for (int i = 0; i < nSpaces; i++)
        cout << ' ';
    for (int i = 0; i < nStars; i++)
        cout << '*';
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    cin >> T;
    print_Recursion(T - 1, 1);
    return 0;
}