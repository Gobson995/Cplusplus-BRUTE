#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n,k; cin >> n >> k;

  vector<long long> v(n);

  long long soma = 0;
  long long contador = 0;

  map<long long, long long> freq;
  freq[0] = 1;

  for (int i = 0; i < n; i++) {
    cin >> v[i];

    soma += v[i];

    if (freq.count(soma - k)) {
      contador += freq[soma - k];
    }

    freq[soma]++;
  }

  cout << contador << endl;

}