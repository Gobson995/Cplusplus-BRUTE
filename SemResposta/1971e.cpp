#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int tem (vector<ll> a, ll k, ll opa) {
  ll l = 0;
  ll r = k - 1;
  while (l <= r) {
    ll mid = (l+r)/2;
    if (a[mid] == opa) {
      return mid;
    }
    else if (a[mid] > opa) {
      r = mid - 1;
    }
    else if (a[mid] < opa) {
      l = mid + 1;
    }
  }
  return -1;
}

int main () {
  int tc; cin >> tc;

  while (tc--) {
    ll n, k, q;
    cin >> n >> k >> q;

    vector <ll> a(k);

    for (ll i = 0; i < k; i++) {
      cin >> a[i];
    }

    vector <ll> b(k);

    for (ll i = 0; i < k; i++) {
      cin >> b[i];
    }
    
    vector <ll> d(q);
    for (ll i = 0; i < q; i++) {
      cin >> d[i];
      ll opa = d[i];
      if (opa == 0) {
        cout << 0 << endl;
      }
      else if (a[tem(a,k,opa)] == opa) {
        ll idx = tem(a,k,opa);
        while (j) {

        }
      }
        
    }




    }
  

    
    
  }
}