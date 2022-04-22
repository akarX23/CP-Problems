#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solve() {
   long long int n, moves = 0;
    cin >> n;

    if(n == 1) {
        cout << 0 << endl;
        return;
    }

    long long int middle = floor(n / 2);
    
    for(long long int i = 0; i <middle - 1; i++) {
        for(long long int j = 0; j < middle; j++) {
            if (abs(i - middle) < abs(j - middle)) {
                moves +=  abs(i - middle) + abs(j - middle - abs(i - middle));
            } else {
                 moves +=  abs(j - middle) + abs(i - middle - abs(j - middle));
            }
        }
    }

    moves = moves*4;
    cout << moves << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

