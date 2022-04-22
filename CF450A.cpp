#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i, pos = 0, weight;
    int hunger[100], max_hunger_weight = -1;
    
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        cin >> hunger[i];
        weight = (ceil((float)hunger[i] / m)) * n + i;
        
        if (weight >= max_hunger_weight) {
            max_hunger_weight = weight;
            pos = i;
        }
    }

    cout << pos + 1 << endl;
    return 0;
}
