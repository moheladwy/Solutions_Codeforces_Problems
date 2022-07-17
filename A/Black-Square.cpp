#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int caloriesArray[4], sumCalories = 0;
    string s;

    for (int i = 0; i < 4; i++)
    {
        cin >> caloriesArray[i];
    }
    cin >> s;

    for (int letter = 0; letter < s.size(); letter++)
    {

        if (s[letter] == '1')
        {
            sumCalories += caloriesArray[0];
        }

        else if (s[letter] == '2')
        {
            sumCalories += caloriesArray[1];
        }

        else if (s[letter] == '3')
        {
            sumCalories += caloriesArray[2];
        }

        else if (s[letter] == '4')
        {
            sumCalories += caloriesArray[3];
        }
    }

    cout << sumCalories;
    return 0;
}