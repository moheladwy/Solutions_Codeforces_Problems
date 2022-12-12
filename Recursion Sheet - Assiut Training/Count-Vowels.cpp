#include <bits\stdc++.h>
using namespace std;

const set<char> chset = {
    'a',
    'e',
    'i',
    'o',
    'u',
};

void print_Recursion(string s, int &nVowels)
{
    if (s.empty())
        return;
    print_Recursion(s.substr(0, s.size() - 1), nVowels);
    if (chset.count(tolower(s[s.size() - 1])))
        nVowels++;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int nVowels = 0;
    string s;
    getline(cin, s);
    print_Recursion(s, nVowels);
    cout << nVowels;
    return 0;
}