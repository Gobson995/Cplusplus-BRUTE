#include <bits/stdc++.h>

using namespace std;

int main () {
int t,po,pa;
cin >> t;
cin >> po;
cin >> pa;

for (int i = 1; i <= pa; i++) {
  ++po;
  if (po > t) {
    po = 1;
  }
}

cout << po << endl;
}