#include <bits/stdc++.h>

using namespace std;

int main () {
int v,n; cin >> v >> n;

int resp;
resp = v*n;
int res;

for (int i = 1; i < 10; i++) {
  res = (resp * i + 9) / 10;
  cout << res << " ";
}

cout << endl;
}