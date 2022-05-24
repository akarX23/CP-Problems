#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int s, n, dragons = 0;
    cin >> s >> n;

    int drag_str, bonus = s;

    for (int i = 0; i < n; i++)
    {
        int str, bonus_i;
        cin >> str >> bonus_i;

        drag_str += str;
        bonus += bonus_i;
    }

    if (bonus >= drag_str)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}