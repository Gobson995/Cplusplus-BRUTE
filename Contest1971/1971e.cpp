#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    ll n, k, q;
    cin >> n >> k >> q;

    vector <ll> a(k+1);
    a[0] = 0;

    for (ll i = 1; i <= k; i++) {
      cin >> a[i];
    }

    vector <ll> b(k+1);
    b[0] = 0;

    for (ll i = 1; i <= k; i++) {
      cin >> b[i];
    }
    
    while (q--) {
      ll target; cin >> target;
      
      ll indx = lower_bound(a.begin(),a.end(), target) - a.begin();
      ll soma = 0;
      

      if (target == a[indx]) {
        cout << b[indx] << endl;
      }
      else {
        soma += b[indx - 1];
        ll opa = target - a[indx-1];
        ll tempo = b[indx] - b[indx - 1];
        ll dist = a[indx] - a[indx -1];
        soma += (opa * tempo) / dist;
        cout << soma << endl;
      }
    }    
  }
}
  

    
    
