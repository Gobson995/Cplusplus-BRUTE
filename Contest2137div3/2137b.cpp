#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> p(n);

    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
    
    vector<int> q(n);
    
    for (int i = 0; i < n; i++) {
      q[i] = n+1 - p[i];
      } 
    
    for (int i = 0; i < n; i++) {
      cout << q[i] << " ";
    }
    cout << endl;
    }
  }
