#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // I initialized the smallestDifference var to 1001 because the max number i can take is 1000 so it's impossible to get a bigger difference
    // and now, i can compare the values that i get.
    int N, M, nCompainations, smallestDifference = 1001, temp;
    cin >> N >> M;

    nCompainations = M - N + 1;
    vector<int> nPieces(M);

    for (int i = 0; i < M; i++)
        cin >> nPieces[i];
    sort(nPieces.begin(), nPieces.end());

    for (int i = 0; i < nCompainations; i++)
    {
        temp = nPieces[i + N - 1] - nPieces[i];
        if (temp < smallestDifference)
            smallestDifference = temp;
    }

    cout << smallestDifference;
    return 0;
}