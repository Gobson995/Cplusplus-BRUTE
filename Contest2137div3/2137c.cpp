#include <bits/stdc++.h>
#define int long long

using namespace std;


signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int a,b; cin >> a >> b;
    int res = 0;
    int apar, bpar;
    
    if (a % 2 == 0) {
      apar = 2;
    }
    else apar = 1;

    if (b % 2 == 0) {
      bpar = 2;
    }
    else bpar = 1;

    if (apar == 2 && bpar == 1) {
      res = -1;
    }
    else if (apar == 1 && bpar == 2) {
      res = (a*(b/2)) + (b/(b/2));
    }
    else if (apar == 1 && bpar == 1) {
      res = a*b + 1;
    }
    else if (apar == 2 && bpar == 2) {
      res = (a*(b/2)) + (b/(b/2));
    }
    if (res % 2 != 0) {
      cout << -1 << endl;
    }
    else {
      cout << res << endl;
    }
  }
}