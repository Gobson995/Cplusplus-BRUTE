#include <bits/stdc++.h>

using namespace std;

// ver se existe
int main () {
  int n; cin >> n;
  vector <int> vec(n);

  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  sort(vec.begin(), vec.end());

  int l = 0, r = n-1;
  int mid;

  int target;
  cin >> target;

  bool visto = false;

  while (l <= r) {
    mid = (l+r)/2;
    if (vec[mid] == target) {
      visto = true;
      break;
    }
    else if (vec[mid] > target) {
      r = mid - 1;
    }
    else if (vec[mid] < target) {
      l = mid + 1;
    }
  }

  if (visto) {
    cout << "tem" << endl;
  }
  else {
    cout << "não tem" << endl;
  }
}