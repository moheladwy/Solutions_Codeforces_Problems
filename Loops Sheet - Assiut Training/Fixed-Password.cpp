#include <iostream>
using namespace std;

int main()
{
    int Password = 0;

    while (Password != 1999)
    {
        cin >> Password;
        if (Password != 1999)
            cout << "Wrong" << endl;
        else
            cout << "Correct" << endl;
    }

    return 0;
}