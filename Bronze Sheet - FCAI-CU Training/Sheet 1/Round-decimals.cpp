#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num, decimalPart = "";
    cin >> num;
    int number;
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] != '.')
            decimalPart += num[i];
        else if (num[i] == '.')
        {
            if (num[i + 1] >= '5')
                number = stoi(decimalPart) + 1;
            else
                number = stoi(decimalPart);
            break;
        }
    }
    cout << number;
    return 0;
}