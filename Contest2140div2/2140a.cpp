#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int l = 0;
    int r = n-1;
    int res = 0;

    while (l!=(r+1)) {
      if (s[l] == '1' && s[r] == '0') {
        swap(s[l],s[r]);
        l++;
        r--;
        res++;
      }
      else if (s[l] == '1' && s[r] == '1') {
        r--;
      }
      else if (s[l] == '0' && s[r] == '0') {
        l++;
      }
      else {
        r--;
        l++;
      }
    }
    cout << res << endl;
  }
}