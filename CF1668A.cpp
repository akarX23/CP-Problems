#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve()
{
    int n, m, moves = 0;
    cin >> n >> m;

    if ((n == 1 && m > 2) || (n > 2 && m == 1))
    {
        cout << -1 << endl;
        return;
    }
    else if (n == 1 && m == 1)
    {
        cout << 0 << endl;
        return;
    }

    int i = 0, j = 0;

    while (true)
    {
        cout << "i: " << i << " j: " << j << " moves: " << moves << endl;
        if (i < n - 1)

            i++;

        else
            i--;

        moves += 1;
        if (i == n - 1 && j == m - 1)
        {
            cout << moves << endl;
            return;
        }

        if (j < m - 1)

            j++;

        else
            j--;
        moves += 1;
        if (i == n - 1 && j == m - 1)
        {
            cout << moves << endl;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
