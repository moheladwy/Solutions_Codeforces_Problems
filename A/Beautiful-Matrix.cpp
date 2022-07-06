#include <iostream>
using namespace std;
int main()
{
    int matrix[5][5] = {0};
    int position[2];
    for (int row = 0; row < 5; row++)
    {
        for (int colm = 0; colm < 5; colm++)
        {
            cin >> matrix[row][colm];
            if (matrix[row][colm] == 1)
            {
                position[0] = row;
                position[1] = colm;
                break;
            }
        }
    }
    int numberOfMovements = abs(2 - position[0]) + abs(2 - position[1]);
    cout << numberOfMovements;
    return 0;
}
