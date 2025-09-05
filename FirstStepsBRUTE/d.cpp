#include <bits/stdc++.h>

using namespace std;

int main () {
  int n; cin >> n;

  vector<int> red(n);
  vector<int> blue(n);
  vector<int> conta(n);

  for (int i = 0; i < n; i++) {
    cin >> red[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> blue[i];
  }
  
  sort(red.begin(), red.end());
  sort(blue.begin(), blue.end());
  reverse(blue.begin(), blue.end());
  
  
  for (int i = 0; i < n; i++) {
    conta[i] = red[i] + blue[i];
  }
  sort(conta.begin(), conta.end());

  cout << conta[n-1] - conta[0] << endl;
}