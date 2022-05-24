#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string reversed_n = to_string(n);
    reverse(reversed_n.begin(), reversed_n.end());

    cout << n << reversed_n << endl;
}