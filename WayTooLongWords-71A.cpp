#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> words;
    string word;
    int numOfWords;
    cin >> numOfWords;
    for (int i = 0; i < numOfWords; i++)
    {
        cin >> word;
        words.push_back(word);
    }

    for (int i = 0; i < numOfWords; i++)
    {
        if (words[i].size() <= 10)
        {
            cout << words[i] << endl;
        }
        else
        {
            cout << words[i][0] << words[i].size() - 2 << words[i][words[i].size() - 1] << endl;
        }
    }
    return 0;
}