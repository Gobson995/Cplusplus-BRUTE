#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int k, x;
    cin >> k >> x;
    
    while (k--) {
      int opa = x * 2;
      if (opa % 2 == 0) {
        x *= 2;
      }
      else {
        x = (1 * 3) + 1;
      }
    }
    cout << x << endl;
  }
}