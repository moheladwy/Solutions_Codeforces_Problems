#include <iostream>
using namespace std;

int main()
{
    int N, counter = 1;
    cin >> N;

    for (int i = 1; i <= 4 * N; i++)
    {
        if (counter % 4 == 0)
            cout << "PUM" << endl;
        else
            cout << counter << " ";
        counter++;
    }

    return 0;
}