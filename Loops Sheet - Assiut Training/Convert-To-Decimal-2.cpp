#include <iostream>
#include <algorithm>
using namespace std;

string DecimalToBinary(int num)
{
    string binaryNumber = "";
    while (num > 0)
    {
        binaryNumber += num % 2 + '0';
        num = num / 2;
    }
    reverse(binaryNumber.begin(), binaryNumber.end());
    return binaryNumber;
}

int coutOnes(const string &binary)
{
    int nOnes = 0;
    for (int i = 0; i < binary.length(); i++)
        if (binary[i] == '1')
            nOnes += 1;
    return nOnes;
}

string makeString(const int &nOnes)
{
    string number = "";
    for (int i = 0; i < nOnes; i++)
        number += '1';
    return number;
}

int main()
{
    int N, num;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        cout << stoi(makeString(coutOnes(DecimalToBinary(num))), 0, 2) << endl;
    }
    return 0;
}