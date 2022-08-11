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
    if (numinator == 1)
    {
        cout << "1/6";
    }
    else if (numinator == 2)
    {
        cout << "1/3";
    }
    else if (numinator == 3)
    {
        cout << "1/2";
    }
    else if (numinator == 4)
    {
        cout << "2/3";
    }
    else if (numinator == 5)
    {
        cout << "5/6";
    }
    else
    {
        cout << "1/1";
    }
    return 0;
}