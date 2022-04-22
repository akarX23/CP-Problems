#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    long long int candies[n];

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    for (long int i = 0; i < n; i++)
    {
        cin >> candies[i];
    }

    long int left = 0, right = n - 1, leftW = 0, rightW = 0, eaten = 0, ans = 0;

    while (right - left >= -1)
    {
        // cout << "Ans: " << ans << " left: " << left << " right: " << right << " Left W: " << leftW << " Right W: " << rightW << endl;

        if (leftW < rightW)
        {
            leftW += candies[left];
            eaten++;
            left += 1;
        }
        if (rightW < leftW)
        {
            rightW += candies[right];
            eaten++;
            right -= 1;
        }
        if (leftW == rightW)
        {
            ans = eaten;

            if ((left == right && n % 2 == 1) || (right - left == 1 && n % 2 == 0))
            {
                break;
            }

            leftW += candies[left];
            rightW += candies[right];
            eaten += 2;

            left += 1;
            right -= 1;
        }
    }

    cout << ans << endl;
    return;
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
