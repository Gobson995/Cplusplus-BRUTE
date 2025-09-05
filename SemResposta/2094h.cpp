#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int f(int k, vector<int> a, int l, int r) {
  int ans = 0;
  while (l <= r)
  {
    if (k % a[l] == 0 && k != 1) {
      k /= a[l];
    }
    else {
      l++;
      ans += k;
    }
  }

  return ans;
}

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    while (q--)
    {
      int k;
      int l, r;
      cin >> k >> l >> r;
      cout << f(k, a, l, r) << endl;
    }
  }
}