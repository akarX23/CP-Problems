#include <bits/stdc++.h>
#include <regex>
using namespace std;

void solve()
{
    string s2;
    cin >> s2;

    bool matched = regex_match(s2, regex("([A]+B)+"));
    if (matched)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
