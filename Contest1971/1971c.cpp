#include <bits/stdc++.h>

using namespace std;

int main () {
int tc; cin >> tc;

while (tc--) {
  int a,b,c,d;
  cin >> a >> b >> c >> d;

  if (a > b) {
    swap(a,b);
  }
  if (c > d) {
    swap(c,d);
  }

  bool ver = true;

  if ((c > a && c < b) ^ (d > a && d < b)) ver = false;

  if (ver) cout << "NO" << endl;
  else cout << "YES" << endl;
  }
}
