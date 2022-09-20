#include <iostream>
using namespace std;

int main()
{
    string s;
    int N;
    cin >> N;
    cin >> s;

    if (s[N - 1] == 'o')
        cout << "No";
    else
        cout << "Yes";
    return 0;
}