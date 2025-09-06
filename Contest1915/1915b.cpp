#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    vector<vector<char>> mat(3, vector<char>(3));

    int conta = 0, contb = 0, contc = 0;

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        cin >> mat[i][j];
        if (mat[i][j] == 'A') {
          conta++;
        }
        else if (mat[i][j] == 'B') {
          contb++;
        }
        else {
          contc++;
        }
      }
    }
    if (conta == 2) cout << "A" << endl;
    else if (contb == 2) cout << "B" << endl;
    else cout << "C" << endl;
  }
}