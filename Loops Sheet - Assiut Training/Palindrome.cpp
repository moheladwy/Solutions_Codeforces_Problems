#include <iostream>
using namespace std;

bool isPalindrome(const long long &number)
{
    string normalNum = to_string(number), reversedNum = "";
    for (int i = normalNum.length() - 1; i >= 0; i--)
        reversedNum += normalNum[i];
    cout << stoll(reversedNum) << endl;
    if (stoll(normalNum) == stoll(reversedNum))
        return true;
    else
        return false;
}

int main()
{
    long long number;
    cin >> number;

    if (number == 1)
    {
        cout << 1 << endl;
        cout << "YES";
        return 0;
    }

    if (isPalindrome(number))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}