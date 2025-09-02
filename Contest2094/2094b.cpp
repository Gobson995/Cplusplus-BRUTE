#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc;
  cin >> tc;

  

  while (tc--) {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int l = 0, r = 0;

    for (int i = 0; i < m; i++) {
      if (i % 2 == 0) {
        if (b > r) {
          r++;
        }
        else {
          l--;
        }
      }
      else {
        if (a < l) {
          l--;
        }
        else {
          r++;
        }
      }
  } 
  cout << l << " " << r << endl;
}
}