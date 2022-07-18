// This code works perfectly.
//_____________________________________________________________________________________________________
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int64_t nNumbers, position;
    cin >> nNumbers >> position;

    if (nNumbers % 2 == 0)
    {
        if (position <= nNumbers / 2)
        {
            cout << 2 * position - 1;
        }
        else if (position > nNumbers / 2)
        {
            cout << 2 * position - nNumbers;
        }
    }
    else
    {
        if (position <= ((nNumbers / 2) + 1))
        {
            cout << 2 * position - 1;
        }
        else if (position > ((nNumbers / 2) + 1))
        {
            cout << (2 * position) - (nNumbers + 1);
        }
    }

    return 0;
}
//_____________________________________________________________________________________________________
// This code gives me memroy limit but it works okay.
//_____________________________________________________________________________________________________
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> getOddNumbers(int nNumbers)
// {
//     vector<int> numbers;
//     for (int number = 1; number <= nNumbers; number += 2)
//     {
//         numbers.push_back(number);
//     }
//     return numbers;
// }

// vector<int> getEvenNumbers(int nNumbers)
// {
//     vector<int> numbers;
//     for (int number = 2; number <= nNumbers; number += 2)
//     {
//         numbers.push_back(number);
//     }
//     return numbers;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int64_t nNumbers, position;
//     cin >> nNumbers >> position;

//     vector<int> oddNumbers = getOddNumbers(nNumbers);
//     vector<int> EvenNumbers = getEvenNumbers(nNumbers);

//     if (position <= oddNumbers.size())
//     {
//         cout << oddNumbers[position - 1];
//     }
//     else
//     {
//         cout << EvenNumbers[position - oddNumbers.size() - 1];
//     }

//     return 0;
// }