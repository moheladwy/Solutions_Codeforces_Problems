
#include <iostream>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;
    int numbers[n * m];
    for (int i = 0; i < n * m; i++)
        cin >> numbers[i];
    cin >> x;
    for (int i = 0; i < n * m; i++)
    {
        if (x == numbers[i])
        {
            cout << "will not take number";
            return 0;
        }
    }

    cout << "will take number";
    return 0;
}