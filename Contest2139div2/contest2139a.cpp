#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << endl;
        } else if (max(a, b) % min(a, b) == 0) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}