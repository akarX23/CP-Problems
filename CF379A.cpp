#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b, hours = 0, wentOut = 0;
    
    cin >> a >> b;
    while (a > 0) {
        hours += 1; 
        a -= 1;
        wentOut++;
        if(wentOut == b) {
            wentOut = 0;
            a += 1;
        }
    }

    cout << hours << endl;
    return 0;
}
