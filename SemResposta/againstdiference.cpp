#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc;
  cin >> tc;

  while(tc--) {
    int t;
    cin >> t;

    vector<int> vec(t);

    for (int i = 0; i < t; i++) {
      cin >> vec[i];
    }

    vector<int> freq(t+1, 0);
    long long resp = 0;

    for (int j : vec) {
      int cont;
      if (freq[j] = j) {
      resp += j;
      freq[j] = 0;
      }
    }

    cout << resp << endl;
  }

}

// errado