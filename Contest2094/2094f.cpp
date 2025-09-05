#include <bits/stdc++.h>

using namespace std;

int main () {
int tc; cin >> tc;
    while (tc--) {
      int n, m, k;
      cin >> n >> m >> k;
      
      vector<int> mat(n * m);

      int a = k;
      
      for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
              mat[i * m + j] = (i * m + j) % k + 1;
          }
      }

      if (m % k == 0) {
          for (int i = 1; i < n; i += 2) {
              rotate(mat.begin() + i * m, mat.begin() + i * m + 1, mat.begin() + i * m + m);
          }
      }

      for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) { 
              cout << mat[i * m + j] << " ";
          }
          cout << endl;
      }
    }
}