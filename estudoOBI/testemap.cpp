#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  vector<int> vec(n);

  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  map<int,int> freq;

  for (int u: vec) {
    freq[u]++;
  }

  
  cout << freq[2] << endl;

}