#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string s,r;
    cin >> s;

    bool flag = true;
    int ind;

    for (int i = 1; i < s.size(); i++) {
      if (s[0] != s[i]) {
        flag = false;
        ind = i;
        break;
      }
    }
    if (!flag) {
      swap(s[0],s[ind]);
      cout << "YES" << endl;
      for (int j = 0; j < s.size(); j++) {
        cout << s[j];
      }
      cout << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
}