#include <bits/stdc++.h>
using namespace std;

bool isLuckyNumber(const int &num)
{
    if (num < 4)
        return false;

    string number = to_string(num);
    for (char &letter : number)
        if (letter != '4' && letter != '7')
            return false;
    return true;
}

vector<int> generateLuckyNumber(const int &num)
{
    vector<int> luckyNumbers;
    for (int i = 4; i < num; i++)
        if (isLuckyNumber(i))
            luckyNumbers.push_back(i);
    return luckyNumbers;
}

bool isAlmostLuckyNumber(const int &num)
{
    vector<int> luckyNumbers = generateLuckyNumber(num);
    for (int number : luckyNumbers)
        if (num % number == 0)
            return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    if (!isLuckyNumber(n))
    {
        if (!isAlmostLuckyNumber(n))
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}