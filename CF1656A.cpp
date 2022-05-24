#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int number, max = INT_MIN, min = INT_MAX, min_index = 0, max_index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        if (number > max)
        {
            max = number;
            max_index = i;
        }
        if (number < min)
        {
            min = number;
            min_index = i;
        }
    }

    cout << min_index + 1 << " " << max_index + 1 << endl;
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
