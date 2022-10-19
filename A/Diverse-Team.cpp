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

    int n, k, tmp;
    cin >> n >> k;
    map2int v;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.insert({tmp, i + 1});
    }
    if (v.size() < k)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;

    map2int::reverse_iterator it = v.rbegin();
    while (k--)
    {
        cout << it->second << ' ';
        it++;
    }
    return 0;
}