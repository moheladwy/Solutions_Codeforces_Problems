#include <iostream>
using namespace std;

int main()
{
    string word;
    int nUpper = 0, nLower = 0;
    cin >> word;
    for (char letter : word)
    {
        if (int(letter) > 64 && int(letter) < 91)
        {
            nUpper++;
        }
        else if (int(letter) > 96 && int(letter) < 123)
        {
            nLower++;
        }
    }
    if (nUpper > nLower)
    {
        for (char &letter : word)
        {
            letter = towupper(letter);
        }
    }
    else
    {
        for (char &letter : word)
        {
            letter = tolower(letter);
        }
    }
    cout << word;
    return 0;
}