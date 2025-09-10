#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector <int> resp (2*n + 1);
    vector <bool> visto (2*n + 1,false);

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        int x; cin >> x;
        resp[i+j] = x;
        visto[x] = true;
      }
    }
    for (int x = 1; x <= (n*2); x++) {
      if (!visto[x]) {
        resp[1] = x;
        break;
      }
    }

    for (int i = 1; i <= (n*2); i++) {
      cout << resp[i] << " ";
    }
    cout << endl;
  }
}