#include <bits/stdc++.h>

using namespace std;

using ll = long long;

signed main() {
  ios_base::sync_with_stdio(0);cin.tie(0);

  int n, a, b; cin >> n >> a >> b;

  vector<int> vec(n);
  cin >> vec[0];

  for(int i = 1; i < n; i++) {
    int c; cin >> c;
    vec[i] = vec[i-1] + c;
  }
  int k; cin >> k;
  --k;

  for(int i = 1; i < n; i++)  {
    if (vec[i] + a >= b && vec[i] != k) {
      cout << "SIM" << endl;
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << "NAO" << endl;
}