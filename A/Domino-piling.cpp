#include <iostream>
using namespace std;
int main()
{
    int M, N, area, nDominos;
    cin >> M >> N;
    area = M * N;
    if (area == 1)
    {
        cout << 0;
        return 0;
    }
    else if (area == 2 || area == 3)
    {
        cout << 1;
        return 0;
    }
    else if (area % 2 == 0)
    {
        nDominos = area / 2;
    }
    else if (area % 2 != 0)
    {
        area -= 1;
        nDominos = area / 2;
    }
    cout << nDominos;
    return 0;
}