#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;

    long long int rooms[n];

    for (int i = 0; i < n; i++)
    {
        cin >> rooms[i];
    }

    long long int dorm = 0, roomsToSkip = 0;
    for (int i = 0; i < m; i++)
    {
        long long int cur_letter;
        cin >> cur_letter;

        cur_letter -= roomsToSkip;
        while (cur_letter != 0)
        {
            if (rooms[dorm] >= cur_letter)
            {
                cout << dorm + 1 << " " << cur_letter << endl;
                if (rooms[dorm] == cur_letter)
                {
                    roomsToSkip += rooms[dorm];
                    dorm += 1;
                }
                cur_letter = 0;
            }

            else
            {
                cur_letter -= rooms[dorm];
                roomsToSkip += rooms[dorm];
                dorm += 1;
            }
        }
    }
}