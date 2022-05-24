#include <bits/stdc++.h>
#include <cstdlib>
#include <regex>
using namespace std;

int main()
{
    string n;
    cin >> n;

    if (n == "hello" || n.length() < 5)
    {
        cout << "NO" << endl;
        return 0;
    }

    string test = "hello";
    int i = 0;

    while (test.length() != 0)
    {
        if (n[i] == test[0])
        {
            test = test.substr(1);
        }
        i++;
    }

    if (test.length() == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}