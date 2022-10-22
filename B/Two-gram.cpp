#include <bits\stdc++.h>
using namespace std;

typedef unsigned int uint;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef vector<int> vint;
typedef vector<char> vcar;
typedef vector<bool> vbool;
typedef vector<string> vstr;
typedef set<int> setint;
typedef set<string> setstr;
typedef set<char> setchar;
typedef map<int, int> map2int;
typedef map<char, char> map2char;
typedef map<string, string> map2str;
typedef map<string, int> mapstrint;
typedef map<int, string> mapintstr;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    string s;
    mapstrint mp;
    setint st;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n - 1; i++)
    {
        string tmp = "";
        tmp += s[i];
        tmp += s[i + 1];
        mp[tmp]++;
    }

    for (auto &it : mp)
        st.insert(it.second);

    for (auto &i : mp)
    {
        if (i.second == *st.rbegin())
        {
            cout << i.first;
            break;
        }
    }

    return 0;
}