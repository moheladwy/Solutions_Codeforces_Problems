#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int yakkoPoints, wakkoPoints;
    cin >> yakkoPoints >> wakkoPoints;

    int numinator = (6 - max(yakkoPoints, wakkoPoints)) + 1;
    int gcdNumber = __gcd(numinator, 6);

    cout << numinator / gcdNumber << "/" << 6 / gcdNumber;
    return 0;
}