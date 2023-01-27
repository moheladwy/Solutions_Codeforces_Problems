#include <bits\stdc++.h>
using namespace std;

#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int nDices, sumBefore, sumAfter;
        cin >> nDices >> sumBefore >> sumAfter;
        vector<int> numbers(nDices, 1);
        numbers[0] = sumBefore - sumAfter;
        int currentSum = numbers[0] + nDices - 1;
        for (int i = 1; i < nDices; i++)
        {
            if (currentSum >= sumBefore)
                break;
            for (int j = 1; j < 7; j++)
            {
                if (numbers[i] == sumBefore - sumAfter)
                    break;
                numbers[i]++;
                currentSum++;
                if (currentSum >= sumBefore)
                    break;
            }
        }
        for (int number : numbers)
            cout << number << ' ';
        cout << endl;
    }
    return 0;
}