#include <iostream>
using namespace std;

void makeLowerCase(string &str)
{
    for (char &letter : str)
    {
        letter = tolower(letter);
    }
}

int main()
{
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    makeLowerCase(str1);
    makeLowerCase(str2);
    if (str1 == str2)
    {
        cout << 0;
    }
    else if (str1 > str2)
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
    return 0;
}